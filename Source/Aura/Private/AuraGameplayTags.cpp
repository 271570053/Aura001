// Fill out your copyright notice in the Description page of Project Settings.

#pragma execution_character_set("utf-8")
#include "AuraGameplayTags.h"
#include"GameplayTagsManager.h"


FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*基础属性*/
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Strength"), FString("增加物理伤害"));//返回一个全局GameplayTagsManager,并添加原生标签
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"), FString("增加魔法伤害"));
	GameplayTags.Attributes_Primary_Resilence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Resilence"), FString("增加护甲和护甲穿透"));
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Vigor"), FString("增加活力"));

	/*次要属性*/
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), FString("减少受到的伤害，提高格挡几率"));
	GameplayTags.Attributes_Secondary_ArmorPenetration =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"),FString("忽略敌方护甲的百分比,增加暴击率"));
	GameplayTags.Attributes_Secondary_BlockChance =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"),FString("有几率将受到的伤害减半"));
	GameplayTags.Attributes_Secondary_CriticalHitChance =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitChance"),FString("有概率造成双倍伤害加暴击加成"));
	GameplayTags.Attributes_Secondary_CriticalHitDamage =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"),FString("暴击时增加额外伤害"));
	GameplayTags.Attributes_Secondary_CriticalResistance =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalResistance"),FString("降低攻击敌人的暴击率"));
	GameplayTags.Attributes_Secondary_HealthRegeneration =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegeneration"),FString("每 1 秒恢复一次生命值"));
	GameplayTags.Attributes_Secondary_ManaRegeneration =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegeneration"),FString("每 1 秒恢复一次魔法值"));
	GameplayTags.Attributes_Secondary_MaxHealth =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"),FString("最大生命值"));
	GameplayTags.Attributes_Secondary_MaxMana =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"),FString("最大魔法值"));


	/*输入标签*/
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.RMB"), FString("鼠标右键"));
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.LMB"), FString("鼠标左键"));
	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.1"), FString("键盘1"));
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.2"), FString("键盘2"));
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.3"), FString("键盘3"));
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.4"), FString("键盘4"));
		
}
