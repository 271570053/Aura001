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

	UPROPERTY()//如果没有这个属性反射，引擎不会自动跟踪他的生命周期；如果这个指针指向的对象被销毁还被引用，会导致悬垂指针/崩溃；GC（垃圾回收）会不知道这个对象还在被引用，会导致提前销毁；他不会出现在蓝图中；不会被网络复制或保存
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
