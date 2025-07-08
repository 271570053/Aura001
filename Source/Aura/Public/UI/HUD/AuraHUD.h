// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

class UAbilitySystemComponent;
class UAttributeMenuWidgerController;
class UAttributeSet;
class UAuraUserWidget;
class UOverlapWidgerController;
struct FWidgetControllerParams;
/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()
	

public:
	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlapWidget;//创建UAuraUerWidget类型指针，里面绑定了WidgetController

	UOverlapWidgerController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);//这个函数返回UOverlapWidgerController类型指针，返回内容为PC，PS，ASC，AS
	UAttributeMenuWidgerController* GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams);

	void InitOverlap(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);
protected:


private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraUserWidget> OverlapWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UOverlapWidgerController>OverlapWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverlapWidgerController>OverlapWidgetControllerClass;

	UPROPERTY()
	TObjectPtr<UAttributeMenuWidgerController>AttributeMenuWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAttributeMenuWidgerController>AttributeMenuWidgetControllerClass;
};
