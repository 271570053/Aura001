// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/AuraProjectileSpell.h"
#include"Interfacion/CombatInterface.h"
#include"Actor/AuraProjectile.h"


void UAuraProjectileSpell::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);



}

void UAuraProjectileSpell::SpawnProjectlie()
{
	
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer)return;

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(GetAvatarActorFromActorInfo());
	if (CombatInterface)
	{
		const FVector SocketLocation = CombatInterface->GetCombatSocketLocation();

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(SocketLocation);
		//设置投射物旋转

		AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>
			(ProjectileClass,   //要生成的Actor类
				SpawnTransform,   //生成时的变换（位置、旋转、缩放）
				GetOwningActorFromActorInfo(),   //拥有者Owner
				Cast<APawn>(GetOwningActorFromActorInfo()),   //发起者（Instigator）
				ESpawnActorCollisionHandlingMethod::AlwaysSpawn);  //碰撞处理方法

		//TODO:为发射火球提供造成伤害的游戏效果spec

		Projectile->FinishSpawning(SpawnTransform);
	}
}
