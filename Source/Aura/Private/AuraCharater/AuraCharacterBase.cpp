// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacter/AuraCharacterBase.h"
#include"AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
AAuraCharacterBase::AAuraCharacterBase()
{
 	
	PrimaryActorTick.bCanEverTick = false;


	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");//创建一个USkeletalMeshComponent类型的子组件，叫做Weapon
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));//SetupAttachment(ParentComponent, SocketName) 是设置组件的挂载父对象和挂到哪个 Socket 上。
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);//Weapon的碰撞检测

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




