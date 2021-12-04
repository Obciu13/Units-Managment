// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsManagment/RTSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerController() {}
// Cross Module References
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister();
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_ARTSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UnitsManagment();
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_ARTSPlayerSpectatorPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARTSPlayerController::execEnableAttackRangeColilders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAttackRangeColilders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerController::execDisableAttackRangeColilders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAttackRangeColilders();
		P_NATIVE_END;
	}
	void ARTSPlayerController::StaticRegisterNativesARTSPlayerController()
	{
		UClass* Class = ARTSPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableAttackRangeColilders", &ARTSPlayerController::execDisableAttackRangeColilders },
			{ "EnableAttackRangeColilders", &ARTSPlayerController::execEnableAttackRangeColilders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Disable queries for AttackRangeCollider for all Units in level.\n" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
		{ "ToolTip", "Disable queries for AttackRangeCollider for all Units in level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerController, nullptr, "DisableAttackRangeColilders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Enable queries for AttackRangeCollider for all Units in level.\n" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
		{ "ToolTip", "Enable queries for AttackRangeCollider for all Units in level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerController, nullptr, "EnableAttackRangeColilders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister()
	{
		return ARTSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitsManagment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPlayerController_DisableAttackRangeColilders, "DisableAttackRangeColilders" }, // 530354007
		{ &Z_Construct_UFunction_ARTSPlayerController_EnableAttackRangeColilders, "EnableAttackRangeColilders" }, // 159263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RTSPlayerController.h" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_CameraPawn_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_CameraPawn = { "CameraPawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerController, CameraPawn), Z_Construct_UClass_ARTSPlayerSpectatorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_CameraPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_CameraPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_CameraPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams = {
		&ARTSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTSPlayerController, 3326208540);
	template<> UNITSMANAGMENT_API UClass* StaticClass<ARTSPlayerController>()
	{
		return ARTSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSPlayerController(Z_Construct_UClass_ARTSPlayerController, &ARTSPlayerController::StaticClass, TEXT("/Script/UnitsManagment"), TEXT("ARTSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
