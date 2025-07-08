// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "AuraAttributeSet.generated.h"



 #define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

//DECLARE_DELEGATE_RetVal(FGameplayAttribute, FAttributeSignature);

USTRUCT(BlueprintType)
struct FEffectProperties
{
	GENERATED_BODY()

	FEffectProperties() {};
	FGameplayEffectContextHandle EffectContextHandle;

	UPROPERTY()
	UAbilitySystemComponent* SourceASC = nullptr;

	UPROPERTY()
	AActor* SourceAvatarActor = nullptr;

	UPROPERTY()
	AController* SourceController = nullptr;

	UPROPERTY()
	ACharacter* SourceCharacter = nullptr;

	UPROPERTY()
	UAbilitySystemComponent* TargetASC = nullptr;

	UPROPERTY()
	AActor* TargetAvatarActor = nullptr;

	UPROPERTY()
	AController* TargetController = nullptr;

	UPROPERTY()
	ACharacter* TargetCharacter = nullptr;


};
//typedef TBaseStaticDelegateInstance<FGameplayAttribute(), FDefaultDelegateUserPolicy>::FFuncPtr FAttributeFuncPtr;
template<class T>
using TStaticFuncPtr = typename TBaseStaticDelegateInstance<FGameplayAttribute(), FDefaultDelegateUserPolicy>::FFuncPtr;
/**
 * 
 */
UCLASS()
class AURA_API UAuraAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UAuraAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;//设置什么属性需要参与复制（哪些属性需要复制）（配合ReplicatedUsing = OnRep_MaxHealth）->如何响应属性更新   用于多人网络联机 

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)override;

	/*
	主要属性
	*/
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Strength, Category = "Primary Attributes")//设置Strength属性
		FGameplayAttributeData  Strength;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Strength);


	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Intelligence, Category = "Primary Attributes")//设置Intelligence属性
		FGameplayAttributeData  Intelligence;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Intelligence);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Resilience, Category = "Primary Attributes")//设置Resilience属性
		FGameplayAttributeData  Resilience;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Resilience);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Vigor, Category = "Primary Attributes")//设置Vigor属性
		FGameplayAttributeData  Vigor;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Vigor);


	TMap<FGameplayTag, TStaticFuncPtr<FGameplayAttribute()>> TagsToAttribute;//高级绑定****

	/*
	中级属性
	*/
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Armor, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  Armor;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Armor);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ArmorPenetration, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  ArmorPenetration;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, ArmorPenetration);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BlockChance, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  BlockChance;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, BlockChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalHitChance, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  CriticalHitChance;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, CriticalHitChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalHitDamage, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  CriticalHitDamage;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, CriticalHitDamage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalHitResistance, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  CriticalHitResistance;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, CriticalHitResistance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HealthRegeneration, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  HealthRegeneration;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, HealthRegeneration);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ManaRegeneration, Category = "Secondary Attributes")//设置Vigor属性
		FGameplayAttributeData  ManaRegeneration;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, ManaRegeneration);

	/*
	*重要属性
	*/

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Vital Attributes")//设置Health属性，当服务端修改了 Health 并同步到客户端时，客户端会调用 OnRep_Health() 这个函数。
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Health);//为Health生成Get（）Set（）函数，用来后续修改他的值
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Vital Attributes")//设置MaxHealth属性
	FGameplayAttributeData  MaxHealth;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Vital Attributes")//设置Mana属性
		FGameplayAttributeData  Mana;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Vital Attributes")//设置Mana属性
		FGameplayAttributeData  MaxMana;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, MaxMana);

	UFUNCTION()//设置Health客户端回调函数
	void OnRep_Health(const FGameplayAttributeData &OldHealth);//因为频繁调用，所以选择引用，避免函数调用时侯复制一份，优化性能；前加const表示只读OldHealth的值，不改变数据，后const表示不会修改当前对象任何成员变量，提高安全性

	UFUNCTION()//设置MaxHealth客户端回调函数
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()//设置Mana客户端回调函数
		void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UFUNCTION()//设置MaxMana客户端回调函数
		void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()//设置Strength客户端回调函数
		void OnRep_Strength(const FGameplayAttributeData& OldStrength);

	UFUNCTION()//设置Intelligence客户端回调函数
		void OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence);

	UFUNCTION()//设置Resilience客户端回调函数
		void OnRep_Resilience(const FGameplayAttributeData& OldResilience);

	UFUNCTION()//设置Vigor客户端回调函数
		void OnRep_Vigor(const FGameplayAttributeData& OldVigor);

	UFUNCTION()//设置Armor客户端回调函数
		void OnRep_Armor(const FGameplayAttributeData& OldArmor);

	UFUNCTION()//设置ArmorPenetration客户端回调函数
		void OnRep_ArmorPenetration(const FGameplayAttributeData& OldArmorPenetration);

	UFUNCTION()//设置BlockChance客户端回调函数
		void OnRep_BlockChance(const FGameplayAttributeData& OldBlockChance);

	UFUNCTION()//设置CriticalHitDamage客户端回调函数
		void OnRep_CriticalHitDamage(const FGameplayAttributeData& OldCriticalHitDamage);

	UFUNCTION()//设置CriticalHitChance客户端回调函数
		void OnRep_CriticalHitChance(const FGameplayAttributeData& OldCriticalHitChance);

	UFUNCTION()//设置CriticalHitResistance客户端回调函数
		void OnRep_CriticalHitResistance(const FGameplayAttributeData& OldCriticalHitResistance);

	UFUNCTION()//设置HealthRegeneration客户端回调函数
		void OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration);


	UFUNCTION()//设置ManaRegeneration客户端回调函数
		void OnRep_ManaRegeneration(const FGameplayAttributeData& OldManaRegeneration);



private:
	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props)const;
};
/*
*[1] 定义属性（如 Health）
    ↓
 UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health)
 FGameplayAttributeData Health;

[2] 定义访问器
    ↓
 ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Health)
 ? 自动生成 Getter / Setter / Init 等函数，供 GAS 使用

[3] 构造函数初始化属性
    ↓
 UAuraAttributeSet::UAuraAttributeSet()
 ? InitHealth(100.0f);

[4] 设置属性参与网络复制
    ↓
 GetLifetimeReplicatedProps()
 ? DOREPLIFETIME_CONDITION_NOTIFY(Health, ..., REPNOTIFY_Always)

[5] 游戏中服务端修改属性值（如受到伤害）
    ↓
 Health.SetCurrentValue(NewValue);

[6] 引擎检测属性变化，准备同步到客户端
    ↓
 属性被标记为 Dirty，下一帧同步

[7] 客户端接收到同步的属性值
    ↓
 自动调用 OnRep_Health(const FGameplayAttributeData& OldHealth)

[8] OnRep 回调内部逻辑
    ↓
 GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldHealth)
 ? 通知 AbilitySystemComponent
 ? 触发 FOnGameplayAttributeValueChange delegate
 ? 通知监听者（如 UI 血条、特效）

[9] HUD 或其他组件收到通知
    ↓
 Update UI / 播放动画 / 更新状态逻辑

*/