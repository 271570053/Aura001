// Fill out your copyright notice in the Description page of Project Settings.



#include "Player/AuraPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include"Interfacion/EnemyInterface.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
	

}


void AAuraPlayerController::CursorTrace()
{
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit)return;

	LastActor = ThisActor;
	ThisActor = CursorHit.GetActor();

	/**
	*���ݹ����Ƹ������ж��������
	* 1.���LastActorΪ����ThisActorΪ�գ���ʲô������
	* 2.���LastActorΪ����ThisActor���ڣ��������ʾ
	* 3.���LastActor��Ч��ThisActorΪ�գ���ȡ��������ʾ
	* 4.���ֶ��Ǵ��ڵģ�����LastActor������ThisActor��ȡ��������ʾLastActor��������ʾThisActor
	* 5.���ֶ����ڣ�������Actor��ȣ�ʲô������
	*/

	if (LastActor == nullptr)
	{
		if (ThisActor != nullptr)
		{
			//���2
			ThisActor->HighlightActor();
		}
		else
		{
			//���1 ��Ϊ�գ�ʲô������
		}
	}
	else
	{
		if (ThisActor == nullptr)
		{
			//���3
			LastActor->UnHighlightActor();
		}
		else//������
		{
			if (LastActor != ThisActor)
			{
				//���4
				LastActor->UnHighlightActor();
				ThisActor->HighlightActor();
			}
			else
			{
				//���5
			}
		}
	}
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

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);//��PlayerInputת��ΪUEnhancedInputComponent����,��EnhancedInputsystem���洫ͳInputComponent

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);//�����붯����������ETriggerEvent::Triggered��ʾ�����¼���this��ʾ��ǰ����&AAuraPlayerController::Move��ʾ����ָ��
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


