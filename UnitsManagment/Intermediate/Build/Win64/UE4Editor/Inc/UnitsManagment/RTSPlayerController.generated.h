// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNITSMANAGMENT_RTSPlayerController_generated_h
#error "RTSPlayerController.generated.h already included, missing '#pragma once' in RTSPlayerController.h"
#endif
#define UNITSMANAGMENT_RTSPlayerController_generated_h

#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_SPARSE_DATA
#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableAttackRangeColilders); \
	DECLARE_FUNCTION(execDisableAttackRangeColilders);


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableAttackRangeColilders); \
	DECLARE_FUNCTION(execDisableAttackRangeColilders);


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSPlayerController(); \
	friend struct Z_Construct_UClass_ARTSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARTSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerController)


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARTSPlayerController(); \
	friend struct Z_Construct_UClass_ARTSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARTSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsManagment"), NO_API) \
	DECLARE_SERIALIZER(ARTSPlayerController)


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPlayerController(ARTSPlayerController&&); \
	NO_API ARTSPlayerController(const ARTSPlayerController&); \
public:


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPlayerController(ARTSPlayerController&&); \
	NO_API ARTSPlayerController(const ARTSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSPlayerController)


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_12_PROLOG
#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_RPC_WRAPPERS \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_INCLASS \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_SPARSE_DATA \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	UnitsManagment_Source_UnitsManagment_RTSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITSMANAGMENT_API UClass* StaticClass<class ARTSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitsManagment_Source_UnitsManagment_RTSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
