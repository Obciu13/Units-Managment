// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitsManagment/UnitBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitBase() {}
// Cross Module References
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_AUnitBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnitsManagment();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNITSMANAGMENT_API UClass* Z_Construct_UClass_ABulletBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUnitBase::execAttackEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execStopAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAttacking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execStartAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAttacking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execDisableAttackCollider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAttackCollider();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execEnableAttackCollider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAttackCollider();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execOnActorLeaveRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLeaveRange(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execOnActorInRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorInRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnitBase::execMoveUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_AUnitBase_DestroyUnit = FName(TEXT("DestroyUnit"));
	void AUnitBase::DestroyUnit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnitBase_DestroyUnit),NULL);
	}
	void AUnitBase::StaticRegisterNativesAUnitBase()
	{
		UClass* Class = AUnitBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEnemy", &AUnitBase::execAttackEnemy },
			{ "DisableAttackCollider", &AUnitBase::execDisableAttackCollider },
			{ "EnableAttackCollider", &AUnitBase::execEnableAttackCollider },
			{ "MoveRight", &AUnitBase::execMoveRight },
			{ "MoveUp", &AUnitBase::execMoveUp },
			{ "OnActorInRange", &AUnitBase::execOnActorInRange },
			{ "OnActorLeaveRange", &AUnitBase::execOnActorLeaveRange },
			{ "StartAttacking", &AUnitBase::execStartAttacking },
			{ "StopAttacking", &AUnitBase::execStopAttacking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnitBase_AttackEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_AttackEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_AttackEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "AttackEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_AttackEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_AttackEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_AttackEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_AttackEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_DestroyUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_DestroyUnit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event implemented in Blueprints, Destroying Unit and removing it from SelectedUnits array\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Event implemented in Blueprints, Destroying Unit and removing it from SelectedUnits array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_DestroyUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "DestroyUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_DestroyUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_DestroyUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_DestroyUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_DestroyUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_DisableAttackCollider_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_DisableAttackCollider_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Disable queries for AttackRangeCollider.\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Disable queries for AttackRangeCollider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_DisableAttackCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "DisableAttackCollider", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_DisableAttackCollider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_DisableAttackCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_DisableAttackCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_DisableAttackCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_EnableAttackCollider_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_EnableAttackCollider_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Enable queries for AttackRangeCollider.\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Enable queries for AttackRangeCollider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_EnableAttackCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "EnableAttackCollider", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_EnableAttackCollider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_EnableAttackCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_EnableAttackCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_EnableAttackCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_MoveRight_Statics
	{
		struct UnitBase_eventMoveRight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnitBase_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "MoveRight", nullptr, nullptr, sizeof(UnitBase_eventMoveRight_Parms), Z_Construct_UFunction_AUnitBase_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_MoveUp_Statics
	{
		struct UnitBase_eventMoveUp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnitBase_MoveUp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventMoveUp_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_MoveUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_MoveUp_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "MoveUp", nullptr, nullptr, sizeof(UnitBase_eventMoveUp_Parms), Z_Construct_UFunction_AUnitBase_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_MoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics
	{
		struct UnitBase_eventOnActorInRange_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorInRange_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorInRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorInRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorInRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((UnitBase_eventOnActorInRange_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnitBase_eventOnActorInRange_Parms), &Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorInRange_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that triggers when any other actor comes into range of unit. If it is Enemy, it is set as a target.\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Function that triggers when any other actor comes into range of unit. If it is Enemy, it is set as a target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "OnActorInRange", nullptr, nullptr, sizeof(UnitBase_eventOnActorInRange_Parms), Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_OnActorInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_OnActorInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics
	{
		struct UnitBase_eventOnActorLeaveRange_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorLeaveRange_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorLeaveRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorLeaveRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnitBase_eventOnActorLeaveRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that triggers when any other actor leaves range of unit.\n" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Function that triggers when any other actor leaves range of unit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "OnActorLeaveRange", nullptr, nullptr, sizeof(UnitBase_eventOnActorLeaveRange_Parms), Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_OnActorLeaveRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_OnActorLeaveRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_StartAttacking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_StartAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_StartAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "StartAttacking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_StartAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_StartAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_StartAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_StartAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnitBase_StopAttacking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnitBase_StopAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_StopAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "StopAttacking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnitBase_StopAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_StopAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnitBase_StopAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnitBase_StopAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnitBase_NoRegister()
	{
		return AUnitBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnitBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnitMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRangeCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackRangeCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitsManagment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnitBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnitBase_AttackEnemy, "AttackEnemy" }, // 3483092204
		{ &Z_Construct_UFunction_AUnitBase_DestroyUnit, "DestroyUnit" }, // 614045878
		{ &Z_Construct_UFunction_AUnitBase_DisableAttackCollider, "DisableAttackCollider" }, // 2030888363
		{ &Z_Construct_UFunction_AUnitBase_EnableAttackCollider, "EnableAttackCollider" }, // 1442865710
		{ &Z_Construct_UFunction_AUnitBase_MoveRight, "MoveRight" }, // 3434889414
		{ &Z_Construct_UFunction_AUnitBase_MoveUp, "MoveUp" }, // 159674711
		{ &Z_Construct_UFunction_AUnitBase_OnActorInRange, "OnActorInRange" }, // 963196210
		{ &Z_Construct_UFunction_AUnitBase_OnActorLeaveRange, "OnActorLeaveRange" }, // 859444626
		{ &Z_Construct_UFunction_AUnitBase_StartAttacking, "StartAttacking" }, // 4170017770
		{ &Z_Construct_UFunction_AUnitBase_StopAttacking, "StopAttacking" }, // 717724225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnitBase.h" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Unit" },
		{ "Comment", "// Body of the Unit\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Body of the Unit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh = { "UnitMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, UnitMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_AttackRangeCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Unit" },
		{ "Comment", "// Collider that checks if Enemy get into Attack Range\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "ToolTip", "Collider that checks if Enemy get into Attack Range" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_AttackRangeCollider = { "AttackRangeCollider", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, AttackRangeCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_AttackRangeCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_AttackRangeCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "Bullets" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, BulletClass), Z_Construct_UClass_ABulletBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitBase_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnitBase, Speed), METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_AttackRangeCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitBase_Statics::ClassParams = {
		&AUnitBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnitBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitBase, 282408716);
	template<> UNITSMANAGMENT_API UClass* StaticClass<AUnitBase>()
	{
		return AUnitBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitBase(Z_Construct_UClass_AUnitBase, &AUnitBase::StaticClass, TEXT("/Script/UnitsManagment"), TEXT("AUnitBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
