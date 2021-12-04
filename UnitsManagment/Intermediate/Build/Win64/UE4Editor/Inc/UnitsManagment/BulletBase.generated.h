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
#ifdef UNITSMANAGMENT_BulletBase_generated_h
#error "BulletBase.generated.h already included, missing '#pragma once' in BulletBase.h"
#endif
#define UNITSMANAGMENT_BulletBase_generated_h

#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_SPARSE_DATA
#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletBase(); \
	friend struct Z_Construct_UClass_ABulletBase_Statics; \
public: \
	DECLARE_CLASS(ABulletBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(ABulletBase)


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABulletBase(); \
	friend struct Z_Construct_UClass_ABulletBase_Statics; \
public: \
	DECLARE_CLASS(ABulletBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(ABulletBase)


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletBase(ABulletBase&&); \
	NO_API ABulletBase(const ABulletBase&); \
public:


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletBase(ABulletBase&&); \
	NO_API ABulletBase(const ABulletBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletBase)


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_PRIVATE_PROPERTY_OFFSET
#define UnitsManagment_Source_UnitsManagment_BulletBase_h_14_PROLOG
#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_RPC_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_INCLASS \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitsManagment_Source_UnitsManagment_BulletBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_INCLASS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_BulletBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITSMANAGMENT_API UClass* StaticClass<class ABulletBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitsManagment_Source_UnitsManagment_BulletBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
