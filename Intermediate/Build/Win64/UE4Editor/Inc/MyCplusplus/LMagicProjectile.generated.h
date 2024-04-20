// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYCPLUSPLUS_LMagicProjectile_generated_h
#error "LMagicProjectile.generated.h already included, missing '#pragma once' in LMagicProjectile.h"
#endif
#define MYCPLUSPLUS_LMagicProjectile_generated_h

#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_SPARSE_DATA
#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorOverlap);


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorOverlap);


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALMagicProjectile(); \
	friend struct Z_Construct_UClass_ALMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(ALMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCplusplus"), NO_API) \
	DECLARE_SERIALIZER(ALMagicProjectile)


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_INCLASS \
private: \
	static void StaticRegisterNativesALMagicProjectile(); \
	friend struct Z_Construct_UClass_ALMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(ALMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCplusplus"), NO_API) \
	DECLARE_SERIALIZER(ALMagicProjectile)


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALMagicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALMagicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALMagicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALMagicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALMagicProjectile(ALMagicProjectile&&); \
	NO_API ALMagicProjectile(const ALMagicProjectile&); \
public:


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALMagicProjectile(ALMagicProjectile&&); \
	NO_API ALMagicProjectile(const ALMagicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALMagicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALMagicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALMagicProjectile)


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ALMagicProjectile, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MovementComp() { return STRUCT_OFFSET(ALMagicProjectile, MovementComp); } \
	FORCEINLINE static uint32 __PPO__EffectComp() { return STRUCT_OFFSET(ALMagicProjectile, EffectComp); }


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_14_PROLOG
#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_PRIVATE_PROPERTY_OFFSET \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_SPARSE_DATA \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_RPC_WRAPPERS \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_INCLASS \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_PRIVATE_PROPERTY_OFFSET \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_SPARSE_DATA \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_INCLASS_NO_PURE_DECLS \
	MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCPLUSPLUS_API UClass* StaticClass<class ALMagicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyCplusplus_Source_MyCplusplus_Public_LMagicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
