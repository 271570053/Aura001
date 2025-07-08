// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/OverlapWidgerController.h"
#include"AbilitySystem/AuraAttributeSet.h"
#include"AbilitySystem/AuraAbilitySystemComponent.h"

void UOverlapWidgerController::BroadcastInitialValues()//广播初始的属性值
{
	const  UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth(),AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
	OnManaChanged.Broadcast(AuraAttributeSet->GetMana());
	OnMaxManaChanged.Broadcast(AuraAttributeSet->GetMaxMana());


}

void UOverlapWidgerController::BindCallbacksToDependencies()
{
	/*Attribute回调*/
	const  UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetHealthAttribute()).AddUObject(this, &UOverlapWidgerController::HealthChanged);//GetGameplayAttributeValueChangeDelegate会返回一个委托（delegate）对象，它会在指定属性发生变化时触发。
	/*
	也就是说一旦监听到Health变化，就立即调用HealthChanged函数
	*/
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UOverlapWidgerController::MaxHealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetManaAttribute()).AddUObject(this, &UOverlapWidgerController::ManaChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetMaxManaAttribute()).AddUObject(this, &UOverlapWidgerController::MaxManaChanged);

	/*Effect回调*/
	Cast<UAuraAbilitySystemComponent>(AbilitySystemComponent)->EffectAssetTags.AddLambda(
		[this](const FGameplayTagContainer& AssetTags) 
		{
			for (const FGameplayTag& Tag : AssetTags )
			{
				//For example,say that Tag=Message.HealthPotion
				//"Message.HealthPotion".MatchesTag("Message")will return True,"Message".MatchesTag("Message.HealthPotion") will return false
				FGameplayTag MessageTag = FGameplayTag::RequestGameplayTag(TEXT("Message"));
				if (Tag.MatchesTag(MessageTag))
				{
					const FUIWidgetRow* Row = GetDataTableRowByTag<FUIWidgetRow>(MessageWidgetDataTable, Tag);
					MessageWidgetRowDelegate.Broadcast(*Row);

				}
		
			}
		}
	);
}

void UOverlapWidgerController::HealthChanged(const FOnAttributeChangeData& Data)
{
	
	OnHealthChanged.Broadcast(Data.NewValue, Data.OldValue);
}

void UOverlapWidgerController::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}

void UOverlapWidgerController::ManaChanged(const FOnAttributeChangeData& Data)
{
	OnManaChanged.Broadcast(Data.NewValue);
}

void UOverlapWidgerController::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	OnMaxManaChanged.Broadcast(Data.NewValue);
}


/*
大概就是将初始的数值广播到UI上面（BroadcastInitialValues），如果后面发生数值变化（BindCallbackToDependencies），就将新的数值广播出去（HealthChanged）
*/