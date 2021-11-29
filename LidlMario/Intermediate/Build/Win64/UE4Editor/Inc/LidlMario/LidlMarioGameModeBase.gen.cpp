// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidlMario/LidlMarioGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidlMarioGameModeBase() {}
// Cross Module References
	LIDLMARIO_API UClass* Z_Construct_UClass_ALidlMarioGameModeBase_NoRegister();
	LIDLMARIO_API UClass* Z_Construct_UClass_ALidlMarioGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LidlMario();
// End Cross Module References
	void ALidlMarioGameModeBase::StaticRegisterNativesALidlMarioGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALidlMarioGameModeBase_NoRegister()
	{
		return ALidlMarioGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALidlMarioGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALidlMarioGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LidlMario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidlMarioGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LidlMarioGameModeBase.h" },
		{ "ModuleRelativePath", "LidlMarioGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALidlMarioGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALidlMarioGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALidlMarioGameModeBase_Statics::ClassParams = {
		&ALidlMarioGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALidlMarioGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALidlMarioGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALidlMarioGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALidlMarioGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALidlMarioGameModeBase, 1338293851);
	template<> LIDLMARIO_API UClass* StaticClass<ALidlMarioGameModeBase>()
	{
		return ALidlMarioGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALidlMarioGameModeBase(Z_Construct_UClass_ALidlMarioGameModeBase, &ALidlMarioGameModeBase::StaticClass, TEXT("/Script/LidlMario"), TEXT("ALidlMarioGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALidlMarioGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
