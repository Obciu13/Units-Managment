// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNITSMANAGMENT_UnitBase_generated_h
#error "UnitBase.generated.h already included, missing '#pragma once' in UnitBase.h"
#endif
#define UNITSMANAGMENT_UnitBase_generated_h

#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_SPARSE_DATA
#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttackEnemy); \
	DECLARE_FUNCTION(execStopAttacking); \
	DECLARE_FUNCTION(execStartAttacking); \
	DECLARE_FUNCTION(execDisableAttackCollider); \
	DECLARE_FUNCTION(execEnableAttackCollider); \
	DECLARE_FUNCTION(execOnActorLeaveRange); \
	DECLARE_FUNCTION(execOnActorInRange); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveUp);


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttackEnemy); \
	DECLARE_FUNCTION(execStopAttacking); \
	DECLARE_FUNCTION(execStartAttacking); \
	DECLARE_FUNCTION(execDisableAttackCollider); \
	DECLARE_FUNCTION(execEnableAttackCollider); \
	DECLARE_FUNCTION(execOnActorLeaveRange); \
	DECLARE_FUNCTION(execOnActorInRange); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveUp);


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_EVENT_PARMS
#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_CALLBACK_WRAPPERS
#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitBase(); \
	friend struct Z_Construct_UClass_AUnitBase_Statics; \
public: \
	DECLARE_CLASS(AUnitBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(AUnitBase)


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAUnitBase(); \
	friend struct Z_Construct_UClass_AUnitBase_Statics; \
public: \
	DECLARE_CLASS(AUnitBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(AUnitBase)


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnitBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnitBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitBase(AUnitBase&&); \
	NO_API AUnitBase(const AUnitBase&); \
public:


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitBase(AUnitBase&&); \
	NO_API AUnitBase(const AUnitBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitBase)


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UnitMesh() { return STRUCT_OFFSET(AUnitBase, UnitMesh); } \
	FORCEINLINE static uint32 __PPO__AttackRangeCollider() { return STRUCT_OFFSET(AUnitBase, AttackRangeCollider); }


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_13_PROLOG \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_EVENT_PARMS


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_RPC_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_CALLBACK_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_INCLASS \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitsManagment_Source_UnitsManagment_UnitBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_CALLBACK_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_INCLASS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_UnitBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITSMANAGMENT_API UClass* StaticClass<class AUnitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitsManagment_Source_UnitsManagment_UnitBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
