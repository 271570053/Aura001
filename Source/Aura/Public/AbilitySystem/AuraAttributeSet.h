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
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;//����ʲô������Ҫ���븴�ƣ���Щ������Ҫ���ƣ������ReplicatedUsing = OnRep_MaxHealth��->�����Ӧ���Ը���   ���ڶ����������� 

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)override;

	/*
	��Ҫ����
	*/
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Strength, Category = "Primary Attributes")//����Strength����
		FGameplayAttributeData  Strength;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Strength);


	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Intelligence, Category = "Primary Attributes")//����Intelligence����
		FGameplayAttributeData  Intelligence;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Intelligence);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Resilience, Category = "Primary Attributes")//����Resilience����
		FGameplayAttributeData  Resilience;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Resilience);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Vigor, Category = "Primary Attributes")//����Vigor����
		FGameplayAttributeData  Vigor;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Vigor);


	TMap<FGameplayTag, TStaticFuncPtr<FGameplayAttribute()>> TagsToAttribute;//�߼���****

	/*
	�м�����
	*/
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Armor, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  Armor;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Armor);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ArmorPenetration, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  ArmorPenetration;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, ArmorPenetration);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BlockChance, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  BlockChance;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, BlockChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalHitChance, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  CriticalHitChance;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, CriticalHitChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalHitDamage, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  CriticalHitDamage;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, CriticalHitDamage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalHitResistance, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  CriticalHitResistance;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, CriticalHitResistance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HealthRegeneration, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  HealthRegeneration;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, HealthRegeneration);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ManaRegeneration, Category = "Secondary Attributes")//����Vigor����
		FGameplayAttributeData  ManaRegeneration;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, ManaRegeneration);

	/*
	*��Ҫ����
	*/

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Vital Attributes")//����Health���ԣ���������޸��� Health ��ͬ�����ͻ���ʱ���ͻ��˻���� OnRep_Health() ���������
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Health);//ΪHealth����Get����Set�������������������޸�����ֵ
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Vital Attributes")//����MaxHealth����
	FGameplayAttributeData  MaxHealth;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Vital Attributes")//����Mana����
		FGameplayAttributeData  Mana;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Vital Attributes")//����Mana����
		FGameplayAttributeData  MaxMana;
	ATTRIBUTE_ACCESSORS(UAuraAttributeSet, MaxMana);

	UFUNCTION()//����Health�ͻ��˻ص�����
	void OnRep_Health(const FGameplayAttributeData &OldHealth);//��ΪƵ�����ã�����ѡ�����ã����⺯������ʱ���һ�ݣ��Ż����ܣ�ǰ��const��ʾֻ��OldHealth��ֵ�����ı����ݣ���const��ʾ�����޸ĵ�ǰ�����κγ�Ա��������߰�ȫ��

	UFUNCTION()//����MaxHealth�ͻ��˻ص�����
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()//����Mana�ͻ��˻ص�����
		void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UFUNCTION()//����MaxMana�ͻ��˻ص�����
		void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()//����Strength�ͻ��˻ص�����
		void OnRep_Strength(const FGameplayAttributeData& OldStrength);

	UFUNCTION()//����Intelligence�ͻ��˻ص�����
		void OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence);

	UFUNCTION()//����Resilience�ͻ��˻ص�����
		void OnRep_Resilience(const FGameplayAttributeData& OldResilience);

	UFUNCTION()//����Vigor�ͻ��˻ص�����
		void OnRep_Vigor(const FGameplayAttributeData& OldVigor);

	UFUNCTION()//����Armor�ͻ��˻ص�����
		void OnRep_Armor(const FGameplayAttributeData& OldArmor);

	UFUNCTION()//����ArmorPenetration�ͻ��˻ص�����
		void OnRep_ArmorPenetration(const FGameplayAttributeData& OldArmorPenetration);

	UFUNCTION()//����BlockChance�ͻ��˻ص�����
		void OnRep_BlockChance(const FGameplayAttributeData& OldBlockChance);

	UFUNCTION()//����CriticalHitDamage�ͻ��˻ص�����
		void OnRep_CriticalHitDamage(const FGameplayAttributeData& OldCriticalHitDamage);

	UFUNCTION()//����CriticalHitChance�ͻ��˻ص�����
		void OnRep_CriticalHitChance(const FGameplayAttributeData& OldCriticalHitChance);

	UFUNCTION()//����CriticalHitResistance�ͻ��˻ص�����
		void OnRep_CriticalHitResistance(const FGameplayAttributeData& OldCriticalHitResistance);

	UFUNCTION()//����HealthRegeneration�ͻ��˻ص�����
		void OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration);


	UFUNCTION()//����ManaRegeneration�ͻ��˻ص�����
		void OnRep_ManaRegeneration(const FGameplayAttributeData& OldManaRegeneration);



private:
	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props)const;
};
/*
*[1] �������ԣ��� Health��
    ��
 UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health)
 FGameplayAttributeData Health;

[2] ���������
    ��
 ATTRIBUTE_ACCESSORS(UAuraAttributeSet, Health)
 ? �Զ����� Getter / Setter / Init �Ⱥ������� GAS ʹ��

[3] ���캯����ʼ������
    ��
 UAuraAttributeSet::UAuraAttributeSet()
 ? InitHealth(100.0f);

[4] �������Բ������縴��
    ��
 GetLifetimeReplicatedProps()
 ? DOREPLIFETIME_CONDITION_NOTIFY(Health, ..., REPNOTIFY_Always)

[5] ��Ϸ�з�����޸�����ֵ�����ܵ��˺���
    ��
 Health.SetCurrentValue(NewValue);

[6] ���������Ա仯��׼��ͬ�����ͻ���
    ��
 ���Ա����Ϊ Dirty����һ֡ͬ��

[7] �ͻ��˽��յ�ͬ��������ֵ
    ��
 �Զ����� OnRep_Health(const FGameplayAttributeData& OldHealth)

[8] OnRep �ص��ڲ��߼�
    ��
 GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldHealth)
 ? ֪ͨ AbilitySystemComponent
 ? ���� FOnGameplayAttributeValueChange delegate
 ? ֪ͨ�����ߣ��� UI Ѫ������Ч��

[9] HUD ����������յ�֪ͨ
    ��
 Update UI / ���Ŷ��� / ����״̬�߼�

*/