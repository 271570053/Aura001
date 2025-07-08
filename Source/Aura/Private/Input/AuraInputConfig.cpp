// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound)
{
	for (const FAuraInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp,Error,TEXT("����������[%s]���Ҳ��������ǩ[%s]��AbilityInputAction,"),*GetNameSafe(this), *InputTag.ToString())
	}
	return nullptr; 
}
