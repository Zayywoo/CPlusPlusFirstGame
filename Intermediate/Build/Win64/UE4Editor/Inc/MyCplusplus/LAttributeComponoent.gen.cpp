// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCplusplus/Public/LAttributeComponoent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLAttributeComponoent() {}
// Cross Module References
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ULAttributeComponoent_NoRegister();
	MYCPLUSPLUS_API UClass* Z_Construct_UClass_ULAttributeComponoent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyCplusplus();
// End Cross Module References
	DEFINE_FUNCTION(ULAttributeComponoent::execApplyHealthChange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyHealthChange(Z_Param_Delta);
		P_NATIVE_END;
	}
	void ULAttributeComponoent::StaticRegisterNativesULAttributeComponoent()
	{
		UClass* Class = ULAttributeComponoent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyHealthChange", &ULAttributeComponoent::execApplyHealthChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics
	{
		struct LAttributeComponoent_eventApplyHealthChange_Parms
		{
			float Delta;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LAttributeComponoent_eventApplyHealthChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LAttributeComponoent_eventApplyHealthChange_Parms), &Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LAttributeComponoent_eventApplyHealthChange_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/LAttributeComponoent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULAttributeComponoent, nullptr, "ApplyHealthChange", nullptr, nullptr, sizeof(LAttributeComponoent_eventApplyHealthChange_Parms), Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULAttributeComponoent_NoRegister()
	{
		return ULAttributeComponoent::StaticClass();
	}
	struct Z_Construct_UClass_ULAttributeComponoent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULAttributeComponoent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCplusplus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULAttributeComponoent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULAttributeComponoent_ApplyHealthChange, "ApplyHealthChange" }, // 2668250995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULAttributeComponoent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LAttributeComponoent.h" },
		{ "ModuleRelativePath", "Public/LAttributeComponoent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULAttributeComponoent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/LAttributeComponoent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULAttributeComponoent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULAttributeComponoent, Health), METADATA_PARAMS(Z_Construct_UClass_ULAttributeComponoent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULAttributeComponoent_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULAttributeComponoent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULAttributeComponoent_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULAttributeComponoent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULAttributeComponoent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULAttributeComponoent_Statics::ClassParams = {
		&ULAttributeComponoent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULAttributeComponoent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULAttributeComponoent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULAttributeComponoent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULAttributeComponoent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULAttributeComponoent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULAttributeComponoent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULAttributeComponoent, 591891396);
	template<> MYCPLUSPLUS_API UClass* StaticClass<ULAttributeComponoent>()
	{
		return ULAttributeComponoent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULAttributeComponoent(Z_Construct_UClass_ULAttributeComponoent, &ULAttributeComponoent::StaticClass, TEXT("/Script/MyCplusplus"), TEXT("ULAttributeComponoent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULAttributeComponoent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
