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
	UAbilitySystemComponent*TargetASC =UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);//获取传入Actor的ASC
	if (TargetASC == nullptr)return;
	//这里也可以利用AbilitySystemInterface来获取Component,但如果Actor没有ASC的话会崩溃
	
	check(GameplayEffectclass);
	FGameplayEffectContextHandle EffectContextHandle= TargetASC->MakeEffectContext();//给Actor的ASC创建上下文
	EffectContextHandle.AddSourceObject(this);//将当前对象（通常是技能或武器等）作为这个效果的来源对象加入上下文。便于后续获取来源，比如反弹、追踪施法者等
	FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectclass, ActorLevel, EffectContextHandle);//创建一个 GameplayEffect 的规格说明句柄（SpecHandle），其中包含效果等级（这里是 1.f）和上下文信息。
	//EffectSpecHandle是个包装器，用来安全地管理EffectSpec    GameEffectClass是传入的技能类
	
	FActiveGameplayEffectHandle ActiveEffectHandle=TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());//将 EffectSpecHandle 指向的 GameplayEffectSpec 施加到 TargetASC 自己身上。
    /*EffectSpecHandle.Data是一个TSharedPtr<FGameplayEffectSpec>
	* .Get()返回的是原始指针FGameplayEffectSpec*
	* 加*表示解引用，传递是实际的FGameplayEffectSpec对象引用，而不是指针
	*/


	/*FGameplayEffectContextHandle
*
* 是FGameplayEffectContext的封装结构
* 目的是为了引用、传递、网络同步上下文
* 可以理解为“技能施放环境的信息包”里面记录了：
*     来源对象（技能/武器等）
*     发起者
*     命中位置
	  命中结果（如击中骨骼）

*/

/*FGameplayEffectSpecHandle
* 是FGameplayEffectSpec的封装结构
* Spec是具体的Gameplay Effect实例，包括了：
*    等级
*    修改属性
*    持续时间
*    施法者上下文
* Handle是为了引用和延迟使用，避免立刻构造所有数据，便于管理生命周期和网络复制


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