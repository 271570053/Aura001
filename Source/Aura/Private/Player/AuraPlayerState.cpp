// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AuraPlayerState.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include"Net/UnrealNetwork.h"

AAuraPlayerState::AAuraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	/*
	*1. Minimal（最少复制）
       作用：只在服务器上保留和处理所有 GameplayEffect，客户端不接收任何GE实例的复制，只同步属性变化（如HP减少了多少）。
       优点：网络流量最小。
       性能最好，适用于大量AI或多人游戏场景。
       缺点：
       客户端不能访问GE信息（比如某个buff的持续时间），除非自己实现同步逻辑。
	   不适用于需要客户端逻辑判断 GE 状态的功能（例如客户端显示 buff UI，或GE触发某些特效）。
	   适用场景：
	   单纯依赖属性变化、不需要在客户端操作GE逻辑的PVP或PVE战斗。

	   2. Mixed（混合模式）
	   作用：
	   可持续（Duration）和无限持续（Infinite）的GE将会复制给受影响的客户端。
	   瞬时GE（Instant）不会被复制，只同步属性变化。
	   优点：
	   折中方案，只复制“重要”的GE。
	   客户端能知道身上持续的Buff/Debuff（比如毒、减速），但不会收到那些“打一下就完事”的GE。
	   缺点：
	   仍然可能遗漏一些GE状态，具体取决于你GE的类型。
	   如果把瞬时GE当作一个“标志”来识别某个状态，在客户端就看不到了。
	   适用场景：
	   需要在客户端展示或响应部分buff/debuff（UI、动画等），但希望优化性能。
	  
	  3. Full（完全复制）
	   作用：所有GE实例都复制到客户端，不论类型（瞬时、持续、无限持续）。
	   优点：
	   客户端可以完整获取GE信息（类型、持续时间、来源、tag等）。
	   最容易在客户端做完整UI和逻辑控制。
	   缺点：
	   网络开销最大。
	   多人游戏中不推荐，尤其是带大量GE的场景（比如MMORPG、MOBA）。
	   适用场景：
	   单机游戏或少人局域网游戏。
	   需要极其精细的客户端GE同步信息（如高精度状态栏、战斗录像系统等）。
	*/

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.0f;
}

void AAuraPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAuraPlayerState, Level);
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const//ASC接口，其他地方使用AuraPlayerState类下的GetAbilitySystemComponent会获取这里的AbilitySystemComponent
{
	return AbilitySystemComponent;
}

void AAuraPlayerState::OnRep_Level(int32 OldLevel)
{
}
