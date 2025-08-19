// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AnilityTask/TargetDataUnderMouse.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UTargetDataUnderMouse;
struct FGameplayAbilityTargetDataHandle;
#ifdef AURA_TargetDataUnderMouse_generated_h
#error "TargetDataUnderMouse.generated.h already included, missing '#pragma once' in TargetDataUnderMouse.h"
#endif
#define AURA_TargetDataUnderMouse_generated_h

#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_9_DELEGATE \
AURA_API void FMouseTargetDataSignature_DelegateWrapper(const FMulticastScriptDelegate& MouseTargetDataSignature, FGameplayAbilityTargetDataHandle const& DataHandle);


#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_SPARSE_DATA
#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatTargetDataUnderMouse);


#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_ACCESSORS
#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetDataUnderMouse(); \
	friend struct Z_Construct_UClass_UTargetDataUnderMouse_Statics; \
public: \
	DECLARE_CLASS(UTargetDataUnderMouse, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UTargetDataUnderMouse)


#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetDataUnderMouse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetDataUnderMouse(UTargetDataUnderMouse&&); \
	NO_API UTargetDataUnderMouse(const UTargetDataUnderMouse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetDataUnderMouse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetDataUnderMouse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetDataUnderMouse) \
	NO_API virtual ~UTargetDataUnderMouse();


#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_16_PROLOG
#define FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_SPARSE_DATA \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_ACCESSORS \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_INCLASS_NO_PURE_DECLS \
	FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UTargetDataUnderMouse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aura_Source_Aura_Public_AbilitySystem_AnilityTask_TargetDataUnderMouse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
