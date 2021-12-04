// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsManagment/UnitsManagmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitsManagmentGameModeBase() {}
// Cross Module References
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_AUnitsManagmentGameModeBase_NoRegister();
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_AUnitsManagmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnitsManagment();
// End Cross Module References
	void AUnitsManagmentGameModeBase::StaticRegisterNativesAUnitsManagmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnitsManagmentGameModeBase_NoRegister()
	{
		return AUnitsManagmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitsManagment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnitsManagmentGameModeBase.h" },
		{ "ModuleRelativePath", "UnitsManagmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitsManagmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::ClassParams = {
		&AUnitsManagmentGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitsManagmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitsManagmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitsManagmentGameModeBase, 1766506501);
	template<> UNITSMANAGMENT_API UClass* StaticClass<AUnitsManagmentGameModeBase>()
	{
		return AUnitsManagmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitsManagmentGameModeBase(Z_Construct_UClass_AUnitsManagmentGameModeBase, &AUnitsManagmentGameModeBase::StaticClass, TEXT("/Script/UnitsManagment"), TEXT("AUnitsManagmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitsManagmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
