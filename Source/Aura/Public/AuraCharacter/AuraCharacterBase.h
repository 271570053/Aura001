// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"AbilitySystemInterface.h"
#include"Interfacion/CombatInterface.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"



class UAbilitySystemComponent;
class UAttributeSet;
class UGameplayEffect;
class UGameplayAbility;

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter,public IAbilitySystemInterface,public ICombatInterface
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY()//���û��������Է��䣬���治���Զ����������������ڣ�������ָ��ָ��Ķ������ٻ������ã��ᵼ������ָ��/������GC���������գ��᲻֪����������ڱ����ã��ᵼ����ǰ���٣��������������ͼ�У����ᱻ���縴�ƻ򱣴�
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	virtual void InitAbilityActorInfo();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attribute")
	TSubclassOf<UGameplayEffect>DefaultPrimaryAttribute;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attribute")
	TSubclassOf<UGameplayEffect>DefaultSecondaryAttribute;

	//UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attribute")
	//TSubclassOf<UGameplayEffect>DefaultVitalAttribute;

	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect>GameplayEffectClass,float Level)const; 
	void InitializeDefaultAttribute()const;

	void AddCharacterAbilities();
private:
	UPROPERTY(EditAnywhere,Category="Abilities")
	TArray<TSubclassOf<UGameplayAbility>>StartupAbilities;

};
