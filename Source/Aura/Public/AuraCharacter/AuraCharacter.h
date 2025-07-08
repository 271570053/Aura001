// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "AuraCharacter/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class AAuraPlayerController;
/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();
private:
	virtual	void PossessedBy(AController*NewController) override;
	virtual void  OnRep_PlayerState() override;

	/*ս���ӿ�*/
	virtual int32 GetPlayerLevel()override;
	/*����ս���ӿ�*/

protected:
	virtual void InitAbilityActorInfo()override;
};

