// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYCPLUSPLUS_LGameplayInterface_generated_h
#error "LGameplayInterface.generated.h already included, missing '#pragma once' in LGameplayInterface.h"
#endif
#define MYCPLUSPLUS_LGameplayInterface_generated_h

#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_SPARSE_DATA
#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_EVENT_PARMS \
	struct LGameplayInterface_eventInteract_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_CALLBACK_WRAPPERS
#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYCPLUSPLUS_API ULGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGameplayInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYCPLUSPLUS_API, ULGameplayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGameplayInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYCPLUSPLUS_API ULGameplayInterface(ULGameplayInterface&&); \
	MYCPLUSPLUS_API ULGameplayInterface(const ULGameplayInterface&); \
public:


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYCPLUSPLUS_API ULGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYCPLUSPLUS_API ULGameplayInterface(ULGameplayInterface&&); \
	MYCPLUSPLUS_API ULGameplayInterface(const ULGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYCPLUSPLUS_API, ULGameplayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGameplayInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGameplayInterface)


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULGameplayInterface(); \
	friend struct Z_Construct_UClass_ULGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(ULGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyCplusplus"), MYCPLUSPLUS_API) \
	DECLARE_SERIALIZER(ULGameplayInterface)


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILGameplayInterface() {} \
public: \
	typedef ULGameplayInterface UClassType; \
	typedef ILGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ILGameplayInterface() {} \
public: \
	typedef ULGameplayInterface UClassType; \
	typedef ILGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_10_PROLOG \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_EVENT_PARMS


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_SPARSE_DATA \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_RPC_WRAPPERS \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_CALLBACK_WRAPPERS \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_SPARSE_DATA \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_CALLBACK_WRAPPERS \
	MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCPLUSPLUS_API UClass* StaticClass<class ULGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyCplusplus_Source_MyCplusplus_Public_LGameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
