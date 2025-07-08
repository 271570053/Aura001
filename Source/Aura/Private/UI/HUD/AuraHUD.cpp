// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/AuraHUD.h"
#include"Widget/AuraUserWidget.h"
#include"UI/WidgetController/AttributeMenuWidgerController.h"
#include"UI/WidgetController/OverlapWidgerController.h"
UOverlapWidgerController* AAuraHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)//��ȡ�򴴽�����������
{
	//���û�У��ʹ���һ��
	if (OverlapWidgetController == nullptr)
	{
		OverlapWidgetController = NewObject<UOverlapWidgerController>(this, OverlapWidgetControllerClass);//ʵ����OverlapWidgetController������ĳ����
		//���빹��������г�ʼ��
		OverlapWidgetController->SetWidgetControllerParams(WCParams);
		OverlapWidgetController->BindCallbacksToDependencies();//���Ը���ʱ�ܵ���ֵ�㲥

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

void AAuraHUD::InitOverlap(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)//��ʼ�� UI
{
	//���UI��ͼ��Ϳ������Ƿ�������
	checkf(OverlapWidgetClass, TEXT("���������ʼ��ʧ�ܣ�������BP_AuraHUD"));
	checkf(OverlapWidgetControllerClass, TEXT("���������������ʼ��ʧ�ܣ�������BP_AuraHUD"));
	
	//����UIWidgetʵ��
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlapWidgetClass);//���������಻һ����UAuraUserWidget��
	OverlapWidget = Cast<UAuraUserWidget>(Widget);

	//��װ��������ȡWidget������
	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
	UOverlapWidgerController* WidgetController = GetOverlayWidgetController(WidgetControllerParams);

	//����������Widget������֪���Լ���˭����
	OverlapWidget->SetWidgetContorller(WidgetController);
	WidgetController->BroadcastInitialValues();

	//UI��ʾ��Ļ��
	Widget->AddToViewport();
}

/*
UI ��ͼ����û����������Ҫ�ֶ��������󶨿�������Ȼ���ɿ����������� GAS ���ݡ��¼�������UI ���¡����� GAS + UI �����һ�ֳ���������������չ�ļܹ���ơ�
*/
