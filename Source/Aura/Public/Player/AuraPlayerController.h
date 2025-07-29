

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include"GameplayTagContainer.h"
#include"Input/AuraInputComponent.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;//ֻ������ָ���������   �������ӱ���ʱ�䣨����Ҫ��ȡͷ�ļ���    ����ֱ��ʹ����ĳ�Ա�ͷ�������Ϊ��֪���ڲ���ʲô��
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;
class UAuraInputConfig;
class UAuraAbilitySystemComponent;
class USplineComponent;
/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);

	void CursorTrace();
	//TObjectPtr<AActor>ThisActor1;
	//TObjectPtr<AActor>LastActor1;
	IEnemyInterface* LastActor;
	IEnemyInterface* ThisActor;
	FHitResult CursorHit;

	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UAuraInputConfig> InputConfig;

	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AuraAbilitySystemComponent;

	UAuraAbilitySystemComponent* GetASC();

	//Ŀ�ĵػ���
	FVector CachedDestination=FVector::ZeroVector;
	float FollowTime=0.f;
	//�̰���ֵ
	float ShortPressThreshold = 0.5f;
	bool bAutoRunning = false;
	bool bTargeting = false;

	UPROPERTY(EditDefaultsOnly)
	//�Զ�Ѱ·�ɽ��ܰ뾶
	float AutoRunAcceptanceRadius = 50.f;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USplineComponent>Spline;

	void AutoRun();
	void DrawSplineTangents();
};
