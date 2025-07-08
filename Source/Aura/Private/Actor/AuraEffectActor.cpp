	// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/AuraEffectActor.h"
#include"AbilitySystemInterface.h"
#include"AbilitySystemComponent.h"
#include <AbilitySystemBlueprintLibrary.h>

AAuraEffectActor::AAuraEffectActor()
{
	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot"));
}


void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraEffectActor::ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect>GameplayEffectclass)
{
	UAbilitySystemComponent*TargetASC =UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);//��ȡ����Actor��ASC
	if (TargetASC == nullptr)return;
	//����Ҳ��������AbilitySystemInterface����ȡComponent,�����Actorû��ASC�Ļ������
	
	check(GameplayEffectclass);
	FGameplayEffectContextHandle EffectContextHandle= TargetASC->MakeEffectContext();//��Actor��ASC����������
	EffectContextHandle.AddSourceObject(this);//����ǰ����ͨ���Ǽ��ܻ������ȣ���Ϊ���Ч������Դ������������ġ����ں�����ȡ��Դ�����練����׷��ʩ���ߵ�
	FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectclass, ActorLevel, EffectContextHandle);//����һ�� GameplayEffect �Ĺ��˵�������SpecHandle�������а���Ч���ȼ��������� 1.f������������Ϣ��
	//EffectSpecHandle�Ǹ���װ����������ȫ�ع���EffectSpec    GameEffectClass�Ǵ���ļ�����
	
	FActiveGameplayEffectHandle ActiveEffectHandle=TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());//�� EffectSpecHandle ָ��� GameplayEffectSpec ʩ�ӵ� TargetASC �Լ����ϡ�
    /*EffectSpecHandle.Data��һ��TSharedPtr<FGameplayEffectSpec>
	* .Get()���ص���ԭʼָ��FGameplayEffectSpec*
	* ��*��ʾ�����ã�������ʵ�ʵ�FGameplayEffectSpec�������ã�������ָ��
	*/


	/*FGameplayEffectContextHandle
*
* ��FGameplayEffectContext�ķ�װ�ṹ
* Ŀ����Ϊ�����á����ݡ�����ͬ��������
* �������Ϊ������ʩ�Ż�������Ϣ���������¼�ˣ�
*     ��Դ���󣨼���/�����ȣ�
*     ������
*     ����λ��
	  ���н��������й�����

*/

/*FGameplayEffectSpecHandle
* ��FGameplayEffectSpec�ķ�װ�ṹ
* Spec�Ǿ����Gameplay Effectʵ���������ˣ�
*    �ȼ�
*    �޸�����
*    ����ʱ��
*    ʩ����������
* Handle��Ϊ�����ú��ӳ�ʹ�ã��������̹����������ݣ����ڹ����������ں����縴��


*/

	const bool bIsInfinte = EffectSpecHandle.Data.Get()->Def.Get()->DurationPolicy == EGameplayEffectDurationType::Infinite;
if (bIsInfinte&& InfiniteEffectRemovePolicy ==EEffectRemovePolicy::RemoveOnEndOverlap)
	{
		ActiveEffectHandles.Add(ActiveEffectHandle, TargetASC);
	}
}

void AAuraEffectActor::OnOverlap(AActor* TargetActor)
{
	if (InstantEffectApplcationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(TargetActor, InstantGameplayEffectClass);
	}
	if (DurationEffectApplcationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(TargetActor, DurationGameplayEffectClass);
	}
	if (InfiniteEffectApplcationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(TargetActor, InfiniteGameplayEffectClass);
	}
}

void AAuraEffectActor::EndOverlap(AActor* TargetActor)
{
	if (InstantEffectApplcationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(TargetActor, InstantGameplayEffectClass);
	}
	if (DurationEffectApplcationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(TargetActor, DurationGameplayEffectClass);
	}
	if (InfiniteEffectApplcationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(TargetActor, InfiniteGameplayEffectClass);
	}
	if (InfiniteEffectRemovePolicy == EEffectRemovePolicy::RemoveOnEndOverlap)
	{
		UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
		if (!IsValid(TargetASC))return;


		TArray<FActiveGameplayEffectHandle>HandlesToRemove;
		for (auto HandlePair: ActiveEffectHandles)
		{
			if (TargetASC == HandlePair.Value)
			{
				TargetASC->RemoveActiveGameplayEffect(HandlePair.Key,1);
				HandlesToRemove.Add(HandlePair.Key);
			}
		}
		for (auto& Handle : HandlesToRemove)
		{
			ActiveEffectHandles.FindAndRemoveChecked(Handle);
		}

	}
}