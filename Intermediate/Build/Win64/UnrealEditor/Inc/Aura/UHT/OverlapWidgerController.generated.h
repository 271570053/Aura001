// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/OverlapWidgerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUIWidgetRow;
#ifdef AURA_OverlapWidgerController_generated_h
#error "OverlapWidgerController.generated.h already included, missing '#pragma once' in OverlapWidgerController.h"
#endif
#define AURA_OverlapWidgerController_generated_h

#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics; \
	AURA_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> AURA_API UScriptStruct* StaticStruct<struct FUIWidgetRow>();

#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_33_DELEGATE \
AURA_API void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth, float OldHealth);


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_34_DELEGATE \
AURA_API void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth);


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_35_DELEGATE \
AURA_API void FOnManaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnManaChangedSignature, float NewMana);


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_36_DELEGATE \
AURA_API void FOnMaxManaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxManaChangedSignature, float NewMaxMana);


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_38_DELEGATE \
AURA_API void FMessageWidgetRowSignature_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignature, FUIWidgetRow Row);


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_SPARSE_DATA
#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_ACCESSORS
#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlapWidgerController(); \
	friend struct Z_Construct_UClass_UOverlapWidgerController_Statics; \
public: \
	DECLARE_CLASS(UOverlapWidgerController, UAuraWidgerController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UOverlapWidgerController)


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlapWidgerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlapWidgerController(UOverlapWidgerController&&); \
	NO_API UOverlapWidgerController(const UOverlapWidgerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlapWidgerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlapWidgerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlapWidgerController) \
	NO_API virtual ~UOverlapWidgerController();


#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_44_PROLOG
#define FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_SPARSE_DATA \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_ACCESSORS \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_INCLASS_NO_PURE_DECLS \
	FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UOverlapWidgerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aura_Source_Aura_Public_UI_WidgetController_OverlapWidgerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
