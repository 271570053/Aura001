// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/AttributeMenuWidgerController.h"
#include "Aura/Public/AbilitySystem/Data/AttributeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgerController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgerController();
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgerController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgerController();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeInfo();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventAttributeInfoSignature_Parms
		{
			FAuraAttributeInfo Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventAttributeInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FAuraAttributeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 1568064286
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "AttributeInfoSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::_Script_Aura_eventAttributeInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::_Script_Aura_eventAttributeInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FAuraAttributeInfo const& Info)
{
	struct _Script_Aura_eventAttributeInfoSignature_Parms
	{
		FAuraAttributeInfo Info;
	};
	_Script_Aura_eventAttributeInfoSignature_Parms Parms;
	Parms.Info=Info;
	AttributeInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UAttributeMenuWidgerController::StaticRegisterNativesUAttributeMenuWidgerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeMenuWidgerController);
	UClass* Z_Construct_UClass_UAttributeMenuWidgerController_NoRegister()
	{
		return UAttributeMenuWidgerController::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeMenuWidgerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributeInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeMenuWidgerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AttributeMenuWidgerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attribute" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfoDelegate = { "AttributeInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgerController, AttributeInfoDelegate), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfoDelegate_MetaData), Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfoDelegate_MetaData) }; // 1894875918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfo_MetaData[] = {
		{ "Category", "AttributeMenuWidgerController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgerController, AttributeInfo), Z_Construct_UClass_UAttributeInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfo_MetaData), Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeMenuWidgerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgerController_Statics::NewProp_AttributeInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeMenuWidgerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgerController_Statics::ClassParams = {
		&UAttributeMenuWidgerController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeMenuWidgerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgerController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgerController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributeMenuWidgerController()
	{
		if (!Z_Registration_Info_UClass_UAttributeMenuWidgerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgerController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeMenuWidgerController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAttributeMenuWidgerController>()
	{
		return UAttributeMenuWidgerController::StaticClass();
	}
	UAttributeMenuWidgerController::UAttributeMenuWidgerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgerController);
	UAttributeMenuWidgerController::~UAttributeMenuWidgerController() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgerController, UAttributeMenuWidgerController::StaticClass, TEXT("UAttributeMenuWidgerController"), &Z_Registration_Info_UClass_UAttributeMenuWidgerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgerController), 3522744902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgerController_h_2092341769(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
