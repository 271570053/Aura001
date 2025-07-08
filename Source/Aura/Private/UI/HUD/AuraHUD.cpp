// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/AuraHUD.h"
#include"Widget/AuraUserWidget.h"
#include"UI/WidgetController/AttributeMenuWidgerController.h"
#include"UI/WidgetController/OverlapWidgerController.h"
UOverlapWidgerController* AAuraHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)//获取或创建控制器对象
{
	//如果没有，就创建一个
	if (OverlapWidgetController == nullptr)
	{
		OverlapWidgetController = NewObject<UOverlapWidgerController>(this, OverlapWidgetControllerClass);//实例化OverlapWidgetController下属的某个类
		//传入构造参数进行初始化
		OverlapWidgetController->SetWidgetControllerParams(WCParams);
		OverlapWidgetController->BindCallbacksToDependencies();//属性更新时受到新值广播

		return OverlapWidgetController;
	}
	return OverlapWidgetController;
}

UAttributeMenuWidgerController* AAuraHUD::GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (AttributeMenuWidgetController == nullptr)
	{
		AttributeMenuWidgetController = NewObject<UAttributeMenuWidgerController>(this, AttributeMenuWidgetControllerClass);
		AttributeMenuWidgetController->SetWidgetControllerParams(WCParams);
		AttributeMenuWidgetController->BindCallbacksToDependencies();

		return AttributeMenuWidgetController;

	}
	return AttributeMenuWidgetController;
}

void AAuraHUD::InitOverlap(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)//初始化 UI
{
	//检查UI蓝图类和控制类是否设置了
	checkf(OverlapWidgetClass, TEXT("覆盖组件初始化失败，请填入BP_AuraHUD"));
	checkf(OverlapWidgetControllerClass, TEXT("覆盖组件控制器初始化失败，请填入BP_AuraHUD"));
	
	//创建UIWidget实例
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlapWidgetClass);//传进来的类不一定是UAuraUserWidget，
	OverlapWidget = Cast<UAuraUserWidget>(Widget);

	//封装参数，获取Widget控制器
	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
	UOverlapWidgerController* WidgetController = GetOverlayWidgetController(WidgetControllerParams);

	//将控制器给Widget，让他知道自己由谁控制
	OverlapWidget->SetWidgetContorller(WidgetController);
	WidgetController->BroadcastInitialValues();

	//UI显示屏幕上
	Widget->AddToViewport();
}

/*
UI 蓝图本身没控制器，你要手动创建并绑定控制器，然后由控制器来管理 GAS 数据、事件监听、UI 更新。这是 GAS + UI 框架中一种常见、清晰、可扩展的架构设计。
*/
