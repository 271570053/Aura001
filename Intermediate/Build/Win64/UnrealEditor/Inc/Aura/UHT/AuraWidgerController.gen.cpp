// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/AuraWidgerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraWidgerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraWidgerController();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgerController_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetControllerParams;
class UScriptStruct* FWidgetControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetControllerParams, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("WidgetControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FWidgetControllerParams>()
{
	return FWidgetControllerParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetControllerParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"WidgetControllerParams",
		Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers),
		sizeof(FWidgetControllerParams),
		alignof(FWidgetControllerParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UAuraWidgerController::execBroadcastInitialValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInitialValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraWidgerController::execSetWidgetControllerParams)
	{
		P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_WCParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetControllerParams(Z_Param_Out_WCParams);
		P_NATIVE_END;
	}
	void UAuraWidgerController::StaticRegisterNativesUAuraWidgerController()
	{
		UClass* Class = UAuraWidgerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInitialValues", &UAuraWidgerController::execBroadcastInitialValues },
			{ "SetWidgetControllerParams", &UAuraWidgerController::execSetWidgetControllerParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraWidgerController, nullptr, "BroadcastInitialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics
	{
		struct AuraWidgerController_eventSetWidgetControllerParams_Parms
		{
			FWidgetControllerParams WCParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WCParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WCParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::NewProp_WCParams = { "WCParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraWidgerController_eventSetWidgetControllerParams_Parms, WCParams), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData), Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData) }; // 4164627517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::NewProp_WCParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraWidgerController, nullptr, "SetWidgetControllerParams", nullptr, nullptr, Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::AuraWidgerController_eventSetWidgetControllerParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::AuraWidgerController_eventSetWidgetControllerParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraWidgerController);
	UClass* Z_Construct_UClass_UAuraWidgerController_NoRegister()
	{
		return UAuraWidgerController::StaticClass();
	}
	struct Z_Construct_UClass_UAuraWidgerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraWidgerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraWidgerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraWidgerController_BroadcastInitialValues, "BroadcastInitialValues" }, // 881738254
		{ &Z_Construct_UFunction_UAuraWidgerController_SetWidgetControllerParams, "SetWidgetControllerParams" }, // 3742735232
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AuraWidgerController.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgerController, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgerController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerState_MetaData), Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgerController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgerController, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraWidgerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgerController_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraWidgerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraWidgerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraWidgerController_Statics::ClassParams = {
		&UAuraWidgerController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuraWidgerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraWidgerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraWidgerController()
	{
		if (!Z_Registration_Info_UClass_UAuraWidgerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraWidgerController.OuterSingleton, Z_Construct_UClass_UAuraWidgerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraWidgerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraWidgerController>()
	{
		return UAuraWidgerController::StaticClass();
	}
	UAuraWidgerController::UAuraWidgerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraWidgerController);
	UAuraWidgerController::~UAuraWidgerController() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics::ScriptStructInfo[] = {
		{ FWidgetControllerParams::StaticStruct, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps, TEXT("WidgetControllerParams"), &Z_Registration_Info_UScriptStruct_WidgetControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetControllerParams), 4164627517U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraWidgerController, UAuraWidgerController::StaticClass, TEXT("UAuraWidgerController"), &Z_Registration_Info_UClass_UAuraWidgerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraWidgerController), 2314480498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_2726021472(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgerController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
