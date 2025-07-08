// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/OverlapWidgerController.h"
#include"AbilitySystem/AuraAttributeSet.h"
#include"AbilitySystem/AuraAbilitySystemComponent.h"

void UOverlapWidgerController::BroadcastInitialValues()//�㲥��ʼ������ֵ
{
	const  UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth(),AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
	OnManaChanged.Broadcast(AuraAttributeSet->GetMana());
	OnMaxManaChanged.Broadcast(AuraAttributeSet->GetMaxMana());


}

void UOverlapWidgerController::BindCallbacksToDependencies()
{
	/*Attribute�ص�*/
	const  UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetHealthAttribute()).AddUObject(this, &UOverlapWidgerController::HealthChanged);//GetGameplayAttributeValueChangeDelegate�᷵��һ��ί�У�delegate������������ָ�����Է����仯ʱ������
	/*
	Ҳ����˵һ��������Health�仯������������HealthChanged����
	*/
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UOverlapWidgerController::MaxHealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetManaAttribute()).AddUObject(this, &UOverlapWidgerController::ManaChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetMaxManaAttribute()).AddUObject(this, &UOverlapWidgerController::MaxManaChanged);

	/*Effect�ص�*/
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
��ž��ǽ���ʼ����ֵ�㲥��UI���棨BroadcastInitialValues����������淢����ֵ�仯��BindCallbackToDependencies�����ͽ��µ���ֵ�㲥��ȥ��HealthChanged��
*/