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
	const float Interval = 100.f; // ÿ��100��λȡһ����
	for (float Distance = 0.f; Distance < SplineLength; Distance += Interval)
	{
		FVector Location = Spline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
		FVector Tangent = Spline->GetDirectionAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

		// ���ӻ����߷���
		DrawDebugDirectionalArrow(
			GetWorld(),
			Location,
			Location + Tangent * 100.f, // ���Գ��ȿ��ӻ�
			50.f,                      // ��ͷ��С
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
	*���ݹ����Ƹ������ж��������
	* 1.���LastActorΪ����ThisActorΪ�գ���ʲô������
	* 2.���LastActorΪ����ThisActor���ڣ��������ʾ
	* 3.���LastActor��Ч��ThisActorΪ�գ���ȡ��������ʾ
	* 4.���ֶ��Ǵ��ڵģ�����LastActor������ThisActor��ȡ��������ʾLastActor��������ʾThisActor
	* 5.���ֶ����ڣ�������Actor��ȣ�ʲô������
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

	check(AuraContext);//���ָ���Ƿ���Ч

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());//�������ң�LocalPlayer���ϣ��ҵ������ϵ� UEnhancedInputLocalPlayerSubsystem��    ULocalPlayer::GetSubsystem<T>(LocalPlayer)��ULocalPlayer���л�ȡGetSubsystem�����Ա��
	if (Subsystem)//����Ϸ�տ�ʼ���ܻ�û�������ϵͳ�������Check�ᵼ�³������
	{
		Subsystem->AddMappingContext(AuraContext, 0);//������ӳ����������ӵ���ҵ�������ϵͳ�С��ڶ������������ȼ���0��ʾ������ȼ������Ը�����Ҫ�������ȼ���
	}
	bShowMouseCursor = true;//��ʾ�����
	DefaultMouseCursor = EMouseCursor::Hand;//Ĭ������꣬Ҳ�������ó����ͣ�EMouseCursor::Hand����ʮ��׼�ǣ�EMouseCursor::Crosshairs���ȡ�

	FInputModeGameAndUI InputModeData;//��������ģʽΪ��Ϸ��UI������������ģʽ��FInputModeGameOnly��ֻ������Ϸ���룬������أ���FInputModeUIOnly��ֻ����UI���룬���ʼ�տɼ�����FInputModeGameAndUI��������룬���������Ϸ�ߵ�����棩
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);//��������Ƿ���������Ϸ�����ڣ�DoNotLock����������꣬�����ϳ����ڣ���LockOnCapture���������ʱ����������LockAlways��ʼ����������ڴ����ڣ�
	InputModeData.SetHideCursorDuringCapture(false);//��������Ƿ��ڲ���ʱ���أ�false����������꣩��true��������꣩
	SetInputMode(InputModeData);//Ӧ������ģʽ
	
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UAuraInputComponent* AuraInputComponent = CastChecked<UAuraInputComponent>(InputComponent);//��PlayerInputת��ΪUEnhancedInputComponent����,��EnhancedInputsystem���洫ͳInputComponent

	AuraInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);//�����붯����������ETriggerEvent::Triggered��ʾ�����¼���this��ʾ��ǰ����&AAuraPlayerController::Move��ʾ����ָ��

	AuraInputComponent->BindAbilityAction(InputConfig, this, &ThisClass::AbilityInputTagPressed, &ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)//ʹ�����ô��ݲ��������⿽�����������
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();//��ȡ���붯����ֵ������ΪFVector2D
	const FRotator Rotation=GetControlRotation();//��ȡ����������ת�Ƕ�
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);//����һ���µ���ת�Ƕȣ�ֻ����Yaw����)
	
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);//����һ����Z����ת�ľ��󣬻�ȡ��X�᷽�������ʹӶ���ȡǰ������ĵ�λ����
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);//��ȡ�Ҳ෽��ĵ�λ����

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);//��ǰ�ƶ�
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);//�����ƶ�
	}
}


