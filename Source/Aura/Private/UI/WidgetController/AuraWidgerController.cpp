// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/AuraWidgerController.h"

void UAuraWidgerController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UAuraWidgerController::BroadcastInitialValues()
{
}

void UAuraWidgerController::BindCallbacksToDependencies()
{

}
