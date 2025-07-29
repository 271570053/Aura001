// Fill out your copyright notice in the Description page of Project Settings.



#include "Player/AuraPlayerController.h"
#include "EnhancedInputComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "EnhancedInputSubsystems.h"
#include"Components/SplineComponent.h"
#include"AuraGameplayTags.h"
#include"AbilitySystem/AuraAbilitySystemComponent.h"
#include"Interfacion/EnemyInterface.h"
#include"NavigationSystem.h"
#include"NavigationPath.h"


AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;

	Spline = CreateDefaultSubobject<USplineComponent>("Spline");  
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
	
	AutoRun();	
	//DrawSplineTangents();

}


void AAuraPlayerController::AutoRun()
{
	if (!bAutoRunning)return;
	if (APawn* ControlledPawn = GetPawn())
	{
		const FVector LocationOnSpline = Spline->FindLocationClosestToWorldLocation(ControlledPawn->GetActorLocation(), ESplineCoordinateSpace::World);
		const FVector Direction = Spline->FindDirectionClosestToWorldLocation(LocationOnSpline, ESplineCoordinateSpace::World);
		ControlledPawn->AddMovementInput(Direction);

		const float DistanceToDestination = (LocationOnSpline - CachedDestination).Length();
		if (DistanceToDestination <= AutoRunAcceptanceRadius)
		{
			bAutoRunning = false;
		}
	}
}
void AAuraPlayerController::DrawSplineTangents()
{
	if (!Spline) return;

	const float SplineLength = Spline->GetSplineLength();
	const float Interval = 100.f; // 每隔100单位取一个点
	for (float Distance = 0.f; Distance < SplineLength; Distance += Interval)
	{
		FVector Location = Spline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
		FVector Tangent = Spline->GetDirectionAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

		// 可视化切线方向
		DrawDebugDirectionalArrow(
			GetWorld(),
			Location,
			Location + Tangent * 100.f, // 乘以长度可视化
			50.f,                      // 箭头大小
			FColor::Red,
			false,                     // bPersistentLines
			5.f,                       // Duration
			0,
			2.f                        // Thickness
		);
	}
}

void AAuraPlayerController::CursorTrace()
{
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit)return;

	LastActor = ThisActor;
	ThisActor = Cast<IEnemyInterface>( CursorHit.GetActor());

	/**
	*根据光标绘制高亮，有多种情况：
	* 1.如果LastActor为空且ThisActor为空，则什么都不做
	* 2.如果LastActor为空且ThisActor存在，则高亮显示
	* 3.如果LastActor有效且ThisActor为空，则取消高亮显示
	* 4.两种都是存在的，但是LastActor不等于ThisActor，取消高亮显示LastActor，高亮显示ThisActor
	* 5.两种都存在，且两个Actor相等，什么都不做
	*/

	if (LastActor != ThisActor)
	{
		if (LastActor)LastActor->UnHighlightActor();
		if (ThisActor)ThisActor->HighlightActor();
	}
}

void AAuraPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	if(InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
	{
		bTargeting = ThisActor ? true : false;
		bAutoRunning = false;
	}
}

void AAuraPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
	{
		if (GetASC())
		{
			GetASC()->AbilityInputTagReleased(InputTag);
		}
		return;
	}
	if (bTargeting)
	{
		if (GetASC())
		{
			GetASC()->AbilityInputTagReleased(InputTag);
		}

	}
	else
	{
		APawn* ControlledPawn = GetPawn();
		if (FollowTime <= ShortPressThreshold)
		{
			if (UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(this, ControlledPawn->GetActorLocation(), CachedDestination))
			{
				Spline->ClearSplinePoints();
				for (const FVector& PointLoc : NavPath->PathPoints)
				{
					Spline->AddSplinePoint(PointLoc, ESplineCoordinateSpace::World);
					//DrawDebugSphere(GetWorld(), PointLoc, 8.f, 8, FColor::Green, false, 5.f);
				}
				CachedDestination = NavPath->PathPoints[NavPath->PathPoints.Num() - 1];
				bAutoRunning = true;
			}
		}
		FollowTime = 0.f;
		bTargeting = false;
	}
}

void AAuraPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().InputTag_LMB))
	{
		if (GetASC())
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}
		return;
	}

	if (bTargeting)
	{
		if (GetASC())
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}
		
	}
	else
	{
		FollowTime += GetWorld()->GetDeltaSeconds();

		if (CursorHit.bBlockingHit)
		{
			CachedDestination = CursorHit.ImpactPoint;
		}

		if (APawn* ControlledPawn = GetPawn())
		{
			const FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
			ControlledPawn->AddMovementInput(WorldDirection);
		}
	}
}

UAuraAbilitySystemComponent* AAuraPlayerController::GetASC()
{
	if (AuraAbilitySystemComponent == nullptr)
	{
		AuraAbilitySystemComponent= Cast<UAuraAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AuraAbilitySystemComponent;
}



void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(AuraContext);//检查指针是否有效

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());//从这个玩家（LocalPlayer）上，找到他身上的 UEnhancedInputLocalPlayerSubsystem。    ULocalPlayer::GetSubsystem<T>(LocalPlayer)《ULocalPlayer类中获取GetSubsystem这个成员》
	if (Subsystem)//在游戏刚开始可能还没有这个子系统，如果用Check会导致程序崩溃
	{
		Subsystem->AddMappingContext(AuraContext, 0);//将输入映射上下文添加到玩家的输入子系统中。第二个参数是优先级，0表示最高优先级。可以根据需要调整优先级。
	}
	bShowMouseCursor = true;//显示鼠标光标
	DefaultMouseCursor = EMouseCursor::Hand;//默认鼠标光标，也可以设置成手型（EMouseCursor::Hand）、十字准星（EMouseCursor::Crosshairs）等。

	FInputModeGameAndUI InputModeData;//设置输入模式为游戏和UI，有三种输入模式：FInputModeGameOnly（只接受游戏输入，鼠标隐藏）、FInputModeUIOnly（只接收UI输入，鼠标始终可见）、FInputModeGameAndUI（混合输入，例如边玩游戏边点击界面）
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);//设置鼠标是否锁定在游戏窗口内：DoNotLock（不锁定鼠标，允许拖出窗口）、LockOnCapture（点击窗口时候锁定）、LockAlways（始终锁定鼠标在窗口内）
	InputModeData.SetHideCursorDuringCapture(false);//设置鼠标是否在捕获时隐藏：false（不隐藏鼠标），true（隐藏鼠标）
	SetInputMode(InputModeData);//应用输入模式
	
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UAuraInputComponent* AuraInputComponent = CastChecked<UAuraInputComponent>(InputComponent);//将PlayerInput转换为UEnhancedInputComponent类型,将EnhancedInputsystem代替传统InputComponent

	AuraInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);//绑定输入动作到函数。ETriggerEvent::Triggered表示触发事件，this表示当前对象，&AAuraPlayerController::Move表示函数指针

	AuraInputComponent->BindAbilityAction(InputConfig, this, &ThisClass::AbilityInputTagPressed, &ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)//使用引用传递参数，避免拷贝，提高性能
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();//获取输入动作的值，类型为FVector2D
	const FRotator Rotation=GetControlRotation();//获取控制器的旋转角度
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);//创建一个新的旋转角度，只保留Yaw分量)
	
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);//创建一个绕Z轴旋转的矩阵，获取其X轴方向向量和从而获取前进方向的单位向量
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);//获取右侧方向的单位向量

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);//向前移动
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);//向右移动
	}
}


