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
		//����Ͷ������ת

		AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>
			(ProjectileClass,   //Ҫ���ɵ�Actor��
				SpawnTransform,   //����ʱ�ı任��λ�á���ת�����ţ�
				GetOwningActorFromActorInfo(),   //ӵ����Owner
				Cast<APawn>(GetOwningActorFromActorInfo()),   //�����ߣ�Instigator��
				ESpawnActorCollisionHandlingMethod::AlwaysSpawn);  //��ײ������

		//TODO:Ϊ��������ṩ����˺�����ϷЧ��spec

		Projectile->FinishSpawning(SpawnTransform);
	}
}
