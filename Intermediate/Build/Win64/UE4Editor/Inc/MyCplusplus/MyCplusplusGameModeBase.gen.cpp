// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCplusplus/MyCplusplusGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCplusplusGameModeBase() {}
// Cross Module References
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCplusplusGameModeBase_NoRegister();
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCplusplusGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyCplusplus();
// End Cross Module References
	void AMyCplusplusGameModeBase::StaticRegisterNativesAMyCplusplusGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyCplusplusGameModeBase_NoRegister()
	{
		return AMyCplusplusGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyCplusplusGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCplusplus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyCplusplusGameModeBase.h" },
		{ "ModuleRelativePath", "MyCplusplusGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCplusplusGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::ClassParams = {
		&AMyCplusplusGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCplusplusGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCplusplusGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCplusplusGameModeBase, 2197929153);
	template<> MYCPLUSPLUS_API UClass* StaticClass<AMyCplusplusGameModeBase>()
	{
		return AMyCplusplusGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCplusplusGameModeBase(Z_Construct_UClass_AMyCplusplusGameModeBase, &AMyCplusplusGameModeBase::StaticClass, TEXT("/Script/MyCplusplus"), TEXT("AMyCplusplusGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCplusplusGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
