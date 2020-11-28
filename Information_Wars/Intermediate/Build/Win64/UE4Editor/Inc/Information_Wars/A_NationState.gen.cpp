// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Information_Wars/A_NationState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_NationState() {}
// Cross Module References
	INFORMATION_WARS_API UClass* Z_Construct_UClass_AA_NationState_NoRegister();
	INFORMATION_WARS_API UClass* Z_Construct_UClass_AA_NationState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Information_Wars();
// End Cross Module References
	void AA_NationState::StaticRegisterNativesAA_NationState()
	{
	}
	UClass* Z_Construct_UClass_AA_NationState_NoRegister()
	{
		return AA_NationState::StaticClass();
	}
	struct Z_Construct_UClass_AA_NationState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_NationState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Information_Wars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_NationState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_NationState.h" },
		{ "ModuleRelativePath", "A_NationState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_NationState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_NationState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA_NationState_Statics::ClassParams = {
		&AA_NationState::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AA_NationState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_NationState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_NationState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AA_NationState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AA_NationState, 1558427685);
	template<> INFORMATION_WARS_API UClass* StaticClass<AA_NationState>()
	{
		return AA_NationState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA_NationState(Z_Construct_UClass_AA_NationState, &AA_NationState::StaticClass, TEXT("/Script/Information_Wars"), TEXT("AA_NationState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_NationState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
