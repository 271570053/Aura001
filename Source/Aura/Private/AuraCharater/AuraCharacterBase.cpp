// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacter/AuraCharacterBase.h"
#include"AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
AAuraCharacterBase::AAuraCharacterBase()
{
 	
	PrimaryActorTick.bCanEverTick = false;


	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");//����һ��USkeletalMeshComponent���͵������������Weapon
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));//SetupAttachment(ParentComponent, SocketName) ����������Ĺ��ظ�����͹ҵ��ĸ� Socket �ϡ�
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);//Weapon����ײ���

}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraCharacterBase::InitAbilityActorInfo()
{
}

void AAuraCharacterBase::ApplyEffectToSelf(TSubclassOf<UGameplayEffect>GameplayEffectClass, float Level)const
{
	check(IsValid(GetAbilitySystemComponent()));
	check(GameplayEffectClass);


	FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponent()->MakeEffectContext();
	ContextHandle.AddSourceObject(this);
	FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, ContextHandle);
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), GetAbilitySystemComponent());
}

void AAuraCharacterBase::InitializeDefaultAttribute() const
{
	ApplyEffectToSelf(DefaultPrimaryAttribute, 1.0f);
	ApplyEffectToSelf(DefaultSecondaryAttribute, 1.0f);
	//ApplyEffectToSelf(DefaultVitalAttribute, 1.0f);
}

void AAuraCharacterBase::AddCharacterAbilities()
{
	UAuraAbilitySystemComponent* AuraASC = CastChecked<UAuraAbilitySystemComponent>(AbilitySystemComponent);
	if (!HasAuthority())return;
	
	AuraASC->AddCharacterAbilities(StartupAbilities);
}




