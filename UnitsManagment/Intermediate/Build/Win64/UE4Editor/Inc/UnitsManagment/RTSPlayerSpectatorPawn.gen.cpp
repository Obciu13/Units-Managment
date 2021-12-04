// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsManagment/RTSPlayerSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerSpectatorPawn() {}
// Cross Module References
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_ARTSPlayerSpectatorPawn_NoRegister();
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_ARTSPlayerSpectatorPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnitsManagment();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARTSPlayerSpectatorPawn::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerSpectatorPawn::execMoveUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_Value);
		P_NATIVE_END;
	}
	void ARTSPlayerSpectatorPawn::StaticRegisterNativesARTSPlayerSpectatorPawn()
	{
		UClass* Class = ARTSPlayerSpectatorPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveRight", &ARTSPlayerSpectatorPawn::execMoveRight },
			{ "MoveUp", &ARTSPlayerSpectatorPawn::execMoveUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics
	{
		struct RTSPlayerSpectatorPawn_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerSpectatorPawn_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTSPlayerSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerSpectatorPawn, nullptr, "MoveRight", nullptr, nullptr, sizeof(RTSPlayerSpectatorPawn_eventMoveRight_Parms), Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics
	{
		struct RTSPlayerSpectatorPawn_eventMoveUp_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPlayerSpectatorPawn_eventMoveUp_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTSPlayerSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerSpectatorPawn, nullptr, "MoveUp", nullptr, nullptr, sizeof(RTSPlayerSpectatorPawn_eventMoveUp_Parms), Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARTSPlayerSpectatorPawn_NoRegister()
	{
		return ARTSPlayerSpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitsManagment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveRight, "MoveRight" }, // 3910054501
		{ &Z_Construct_UFunction_ARTSPlayerSpectatorPawn_MoveUp, "MoveUp" }, // 2430726637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSPlayerSpectatorPawn.h" },
		{ "ModuleRelativePath", "RTSPlayerSpectatorPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RTSPlayerSpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerSpectatorPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::NewProp_CameraComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::NewProp_CameraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerSpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::ClassParams = {
		&ARTSPlayerSpectatorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTSPlayerSpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTSPlayerSpectatorPawn, 2850168295);
	template<> UNITSMANAGMENT_API UClass* StaticClass<ARTSPlayerSpectatorPawn>()
	{
		return ARTSPlayerSpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSPlayerSpectatorPawn(Z_Construct_UClass_ARTSPlayerSpectatorPawn, &ARTSPlayerSpectatorPawn::StaticClass, TEXT("/Script/UnitsManagment"), TEXT("ARTSPlayerSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
