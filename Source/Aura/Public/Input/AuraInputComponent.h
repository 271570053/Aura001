// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include"AuraInputConfig.h"
#include "AuraInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	template<class UserClass,typename PressedFuncType,typename ReleasedFuncType,typename HeldFuncType>
	void BindAbilityAction(const UAuraInputConfig* InputConfig,UserClass*Object,PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc,HeldFuncType HeldFunc);
};

//模板函数实现
template<class UserClass, typename PressedFuncType, typename ReleasedFuncType, typename HeldFuncType>
inline void UAuraInputComponent::BindAbilityAction(const UAuraInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc)//PressedFunc 按下函数 ；ReleasedFunc 抬起按键函数；HeldFunc  实现功能函数
{
	check(InputConfig);

	for (const FAuraInputAction& Action : InputConfig->AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag.IsValid())
		{
			if (PressedFunc)
			{
				BindAction(Action.InputAction, ETriggerEvent::Started, Object, PressedFunc, Action.InputTag);
			}
			if (ReleasedFunc)
			{
				BindAction(Action.InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, Action.InputTag);
			}
			if (HeldFunc)
			{
				BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, HeldFunc, Action.InputTag);
			}
		}
	}
}
/*ETriggerEvent
枚举值	    触发时机	                    示例场景
Started	    按键按下的瞬间	                按下开火键（Fire）
Triggered	按住按键时持续触发	            按住移动键（Move）持续移动
Completed	按键释放时触发	                松开开火键（Fire）
Canceled	输入被强制中断（如 UI 遮挡）	游戏暂停时取消输入*/
