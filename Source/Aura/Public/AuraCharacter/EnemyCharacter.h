// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacter/AuraCharacterBase.h"
#include"Interfacion/EnemyInterface.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemyCharacter : public AAuraCharacterBase,public IEnemyInterface
{
	GENERATED_BODY()
public:
	AEnemyCharacter();
	
	/*���˽ӿ�*/
	virtual void HighlightActor() override;
	virtual void UnHighlightActor()override;
	/*�������˽ӿ�*/

	/*ս���ӿ�*/
	virtual int32 GetPlayerLevel()override;
	/*����ս���ӿ�*/

protected:
	virtual void BeginPlay()override;
	
	virtual void InitAbilityActorInfo()override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;

};
