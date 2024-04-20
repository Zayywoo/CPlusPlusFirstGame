// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCplusplus/Public/LInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLInteractionComponent() {}
// Cross Module References
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ULInteractionComponent_NoRegister();
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ULInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyCplusplus();
// End Cross Module References
	void ULInteractionComponent::StaticRegisterNativesULInteractionComponent()
	{
	}
	UClass* Z_Construct_UClass_ULInteractionComponent_NoRegister()
	{
		return ULInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCplusplus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/LInteractionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULInteractionComponent_Statics::ClassParams = {
		&ULInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULInteractionComponent, 136302252);
	template<> MYCPLUSPLUS_API UClass* StaticClass<ULInteractionComponent>()
	{
		return ULInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULInteractionComponent(Z_Construct_UClass_ULInteractionComponent, &ULInteractionComponent::StaticClass, TEXT("/Script/MyCplusplus"), TEXT("ULInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
