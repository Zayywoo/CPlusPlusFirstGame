// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYCPLUSPLUS_LCharacter_generated_h
#error "LCharacter.generated.h already included, missing '#pragma once' in LCharacter.h"
#endif
#define MYCPLUSPLUS_LCharacter_generated_h

#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_SPARSE_DATA
#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_RPC_WRAPPERS
#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALCharacter(); \
	friend struct Z_Construct_UClass_ALCharacter_Statics; \
public: \
	DECLARE_CLASS(ALCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCplusplus"), NO_API) \
	DECLARE_SERIALIZER(ALCharacter)


#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesALCharacter(); \
	friend struct Z_Construct_UClass_ALCharacter_Statics; \
public: \
	DECLARE_CLASS(ALCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCplusplus"), NO_API) \
	DECLARE_SERIALIZER(ALCharacter)


#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALCharacter(ALCharacter&&); \
	NO_API ALCharacter(const ALCharacter&); \
public:


#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALCharacter(ALCharacter&&); \
	NO_API ALCharacter(const ALCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALCharacter)


#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ALCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__AttackAnim() { return STRUCT_OFFSET(ALCharacter, AttackAnim); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ALCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ALCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__InteractionComp() { return STRUCT_OFFSET(ALCharacter, InteractionComp); } \
	FORCEINLINE static uint32 __PPO__AttributeComp() { return STRUCT_OFFSET(ALCharacter, AttributeComp); }


#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_17_PROLOG
#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_SPARSE_DATA \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_RPC_WRAPPERS \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_INCLASS \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_SPARSE_DATA \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_INCLASS_NO_PURE_DECLS \
	MyCplusplus_Source_MyCplusplus_Public_LCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCPLUSPLUS_API UClass* StaticClass<class ALCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyCplusplus_Source_MyCplusplus_Public_LCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
