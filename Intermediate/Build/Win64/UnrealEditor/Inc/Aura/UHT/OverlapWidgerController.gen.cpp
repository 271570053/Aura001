// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/OverlapWidgerController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlapWidgerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgerController();
	AURA_API UClass* Z_Construct_UClass_UOverlapWidgerController();
	AURA_API UClass* Z_Construct_UClass_UOverlapWidgerController_NoRegister();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

static_assert(std::is_polymorphic<FUIWidgetRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUIWidgetRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIWidgetRow;
class UScriptStruct* FUIWidgetRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIWidgetRow, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("UIWidgetRow"));
	}
	return Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FUIWidgetRow>()
{
	return FUIWidgetRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MessageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIWidgetRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag = { "MessageTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MessageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget = { "MessageWidget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MessageWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UAuraUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UIWidgetRow",
		Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers),
		sizeof(FUIWidgetRow),
		alignof(FUIWidgetRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow()
	{
		if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnHealthChangedSignature_Parms
		{
			float NewHealth;
			float OldHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnHealthChangedSignature_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnHealthChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnHealthChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth, float OldHealth)
{
	struct _Script_Aura_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
		float OldHealth;
	};
	_Script_Aura_eventOnHealthChangedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.OldHealth=OldHealth;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnMaxHealthChangedSignature_Parms
		{
			float NewMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnMaxHealthChangedSignature_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe3\xb2\xa5\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""FOnHealthChangedSignature\xef\xbf\xbd\xc4\xb9\xe3\xb2\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""float\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb5\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xc4\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdNewHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe3\xb2\xa5\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""FOnHealthChangedSignature\xef\xbf\xbd\xc4\xb9\xe3\xb2\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""float\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb5\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xc4\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdNewHealth" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnMaxHealthChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxHealthChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth)
{
	struct _Script_Aura_eventOnMaxHealthChangedSignature_Parms
	{
		float NewMaxHealth;
	};
	_Script_Aura_eventOnMaxHealthChangedSignature_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnMaxHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnManaChangedSignature_Parms
		{
			float NewMana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::NewProp_NewMana = { "NewMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnManaChangedSignature_Parms, NewMana), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::NewProp_NewMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnManaChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnManaChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnManaChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnManaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnManaChangedSignature, float NewMana)
{
	struct _Script_Aura_eventOnManaChangedSignature_Parms
	{
		float NewMana;
	};
	_Script_Aura_eventOnManaChangedSignature_Parms Parms;
	Parms.NewMana=NewMana;
	OnManaChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnMaxManaChangedSignature_Parms
		{
			float NewMaxMana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::NewProp_NewMaxMana = { "NewMaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnMaxManaChangedSignature_Parms, NewMaxMana), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::NewProp_NewMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnMaxManaChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxManaChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxManaChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxManaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxManaChangedSignature, float NewMaxMana)
{
	struct _Script_Aura_eventOnMaxManaChangedSignature_Parms
	{
		float NewMaxMana;
	};
	_Script_Aura_eventOnMaxManaChangedSignature_Parms Parms;
	Parms.NewMaxMana=NewMaxMana;
	OnMaxManaChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventMessageWidgetRowSignature_Parms
		{
			FUIWidgetRow Row;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventMessageWidgetRowSignature_Parms, Row), Z_Construct_UScriptStruct_FUIWidgetRow, METADATA_PARAMS(0, nullptr) }; // 2499551945
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::NewProp_Row,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "MessageWidgetRowSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::_Script_Aura_eventMessageWidgetRowSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::_Script_Aura_eventMessageWidgetRowSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMessageWidgetRowSignature_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignature, FUIWidgetRow Row)
{
	struct _Script_Aura_eventMessageWidgetRowSignature_Parms
	{
		FUIWidgetRow Row;
	};
	_Script_Aura_eventMessageWidgetRowSignature_Parms Parms;
	Parms.Row=Row;
	MessageWidgetRowSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UOverlapWidgerController::StaticRegisterNativesUOverlapWidgerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlapWidgerController);
	UClass* Z_Construct_UClass_UOverlapWidgerController_NoRegister()
	{
		return UOverlapWidgerController::StaticClass();
	}
	struct Z_Construct_UClass_UOverlapWidgerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetRowDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageWidgetRowDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageWidgetDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlapWidgerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/OverlapWidgerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlapWidgerController, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnHealthChanged_MetaData) }; // 2721925274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlapWidgerController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 3121822916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlapWidgerController, OnManaChanged), Z_Construct_UDelegateFunction_Aura_OnManaChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnManaChanged_MetaData), Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnManaChanged_MetaData) }; // 76605443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlapWidgerController, OnMaxManaChanged), Z_Construct_UDelegateFunction_Aura_OnMaxManaChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxManaChanged_MetaData), Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxManaChanged_MetaData) }; // 1398353374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetRowDelegate_MetaData[] = {
		{ "Category", "GAS|Messages" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetRowDelegate = { "MessageWidgetRowDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlapWidgerController, MessageWidgetRowDelegate), Z_Construct_UDelegateFunction_Aura_MessageWidgetRowSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetRowDelegate_MetaData), Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetRowDelegate_MetaData) }; // 2586811619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetDataTable_MetaData[] = {
		{ "Category", "Widget Data" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlapWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetDataTable = { "MessageWidgetDataTable", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlapWidgerController, MessageWidgetDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetDataTable_MetaData), Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlapWidgerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_OnMaxManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetRowDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlapWidgerController_Statics::NewProp_MessageWidgetDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlapWidgerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlapWidgerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlapWidgerController_Statics::ClassParams = {
		&UOverlapWidgerController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverlapWidgerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlapWidgerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapWidgerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOverlapWidgerController()
	{
		if (!Z_Registration_Info_UClass_UOverlapWidgerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlapWidgerController.OuterSingleton, Z_Construct_UClass_UOverlapWidgerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlapWidgerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UOverlapWidgerController>()
	{
		return UOverlapWidgerController::StaticClass();
	}
	UOverlapWidgerController::UOverlapWidgerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlapWidgerController);
	UOverlapWidgerController::~UOverlapWidgerController() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics::ScriptStructInfo[] = {
		{ FUIWidgetRow::StaticStruct, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps, TEXT("UIWidgetRow"), &Z_Registration_Info_UScriptStruct_UIWidgetRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIWidgetRow), 2499551945U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlapWidgerController, UOverlapWidgerController::StaticClass, TEXT("UOverlapWidgerController"), &Z_Registration_Info_UClass_UOverlapWidgerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlapWidgerController), 3394705659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_3205162603(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
