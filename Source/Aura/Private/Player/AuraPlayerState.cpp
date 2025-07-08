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
	*1. Minimal�����ٸ��ƣ�
       ���ã�ֻ�ڷ������ϱ����ʹ������� GameplayEffect���ͻ��˲������κ�GEʵ���ĸ��ƣ�ֻͬ�����Ա仯����HP�����˶��٣���
       �ŵ㣺����������С��
       ������ã������ڴ���AI�������Ϸ������
       ȱ�㣺
       �ͻ��˲��ܷ���GE��Ϣ������ĳ��buff�ĳ���ʱ�䣩�������Լ�ʵ��ͬ���߼���
	   ����������Ҫ�ͻ����߼��ж� GE ״̬�Ĺ��ܣ�����ͻ�����ʾ buff UI����GE����ĳЩ��Ч����
	   ���ó�����
	   �����������Ա仯������Ҫ�ڿͻ��˲���GE�߼���PVP��PVEս����

	   2. Mixed�����ģʽ��
	   ���ã�
	   �ɳ�����Duration�������޳�����Infinite����GE���Ḵ�Ƹ���Ӱ��Ŀͻ��ˡ�
	   ˲ʱGE��Instant�����ᱻ���ƣ�ֻͬ�����Ա仯��
	   �ŵ㣺
	   ���з�����ֻ���ơ���Ҫ����GE��
	   �ͻ�����֪�����ϳ�����Buff/Debuff�����綾�����٣����������յ���Щ����һ�¾����¡���GE��
	   ȱ�㣺
	   ��Ȼ������©һЩGE״̬������ȡ������GE�����͡�
	   �����˲ʱGE����һ������־����ʶ��ĳ��״̬���ڿͻ��˾Ϳ������ˡ�
	   ���ó�����
	   ��Ҫ�ڿͻ���չʾ����Ӧ����buff/debuff��UI�������ȣ�����ϣ���Ż����ܡ�
	  
	  3. Full����ȫ���ƣ�
	   ���ã�����GEʵ�������Ƶ��ͻ��ˣ��������ͣ�˲ʱ�����������޳�������
	   �ŵ㣺
	   �ͻ��˿���������ȡGE��Ϣ�����͡�����ʱ�䡢��Դ��tag�ȣ���
	   �������ڿͻ���������UI���߼����ơ�
	   ȱ�㣺
	   ���翪�����
	   ������Ϸ�в��Ƽ��������Ǵ�����GE�ĳ���������MMORPG��MOBA����
	   ���ó�����
	   ������Ϸ�����˾�������Ϸ��
	   ��Ҫ���侫ϸ�Ŀͻ���GEͬ����Ϣ����߾���״̬����ս��¼��ϵͳ�ȣ���
	*/

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.0f;
}

void AAuraPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAuraPlayerState, Level);
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const//ASC�ӿڣ������ط�ʹ��AuraPlayerState���µ�GetAbilitySystemComponent���ȡ�����AbilitySystemComponent
{
	return AbilitySystemComponent;
}

void AAuraPlayerState::OnRep_Level(int32 OldLevel)
{
}
