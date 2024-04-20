// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCplusplus/Public/LItemChest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLItemChest() {}
// Cross Module References
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ALItemChest_NoRegister();
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ALItemChest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCplusplus();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ULGameplayInterface_NoRegister();
// End Cross Module References
	void ALItemChest::StaticRegisterNativesALItemChest()
	{
	}
	UClass* Z_Construct_UClass_ALItemChest_NoRegister()
	{
		return ALItemChest::StaticClass();
	}
	struct Z_Construct_UClass_ALItemChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LidMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALItemChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCplusplus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALItemChest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LItemChest.h" },
		{ "ModuleRelativePath", "Public/LItemChest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALItemChest_Statics::NewProp_LidMesh_MetaData[] = {
		{ "Category", "LItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LItemChest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALItemChest_Statics::NewProp_LidMesh = { "LidMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALItemChest, LidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALItemChest_Statics::NewProp_LidMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALItemChest_Statics::NewProp_LidMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALItemChest_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "LItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LItemChest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALItemChest_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALItemChest, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALItemChest_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALItemChest_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALItemChest_Statics::NewProp_TargetPitch_MetaData[] = {
		{ "Category", "LItemChest" },
		{ "ModuleRelativePath", "Public/LItemChest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALItemChest_Statics::NewProp_TargetPitch = { "TargetPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALItemChest, TargetPitch), METADATA_PARAMS(Z_Construct_UClass_ALItemChest_Statics::NewProp_TargetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALItemChest_Statics::NewProp_TargetPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALItemChest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALItemChest_Statics::NewProp_LidMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALItemChest_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALItemChest_Statics::NewProp_TargetPitch,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALItemChest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(ALItemChest, ILGameplayInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALItemChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALItemChest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALItemChest_Statics::ClassParams = {
		&ALItemChest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALItemChest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALItemChest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALItemChest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALItemChest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALItemChest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALItemChest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALItemChest, 2040400119);
	template<> MYCPLUSPLUS_API UClass* StaticClass<ALItemChest>()
	{
		return ALItemChest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALItemChest(Z_Construct_UClass_ALItemChest, &ALItemChest::StaticClass, TEXT("/Script/MyCplusplus"), TEXT("ALItemChest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALItemChest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
