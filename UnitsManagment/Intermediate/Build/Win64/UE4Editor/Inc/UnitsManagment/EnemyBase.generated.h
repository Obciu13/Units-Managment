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
class AUnitBase;
#ifdef UNITSMANAGMENT_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define UNITSMANAGMENT_EnemyBase_generated_h

#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_SPARSE_DATA
#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_RPC_WRAPPERS \
	virtual void OnGetAttacked_Implementation(AUnitBase* UnitAttacking); \
 \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execOnGetAttacked);


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnGetAttacked_Implementation(AUnitBase* UnitAttacking); \
 \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execOnGetAttacked);


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_EVENT_PARMS \
	struct EnemyBase_eventOnGetAttacked_Parms \
	{ \
		AUnitBase* UnitAttacking; \
	};


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_CALLBACK_WRAPPERS
#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase)


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnemyMesh() { return STRUCT_OFFSET(AEnemyBase, EnemyMesh); } \
	FORCEINLINE static uint32 __PPO__AttackRangeCollider() { return STRUCT_OFFSET(AEnemyBase, AttackRangeCollider); }


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_13_PROLOG \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_EVENT_PARMS


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_RPC_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_CALLBACK_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_INCLASS \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_CALLBACK_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_INCLASS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_EnemyBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITSMANAGMENT_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitsManagment_Source_UnitsManagment_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
