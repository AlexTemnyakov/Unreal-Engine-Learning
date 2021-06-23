// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef P1_CONTROLLEDCAMERAS_CameraDirector_generated_h
#error "CameraDirector.generated.h already included, missing '#pragma once' in CameraDirector.h"
#endif
#define P1_CONTROLLEDCAMERAS_CameraDirector_generated_h

#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_SPARSE_DATA
#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_RPC_WRAPPERS
#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/p1_ControlledCameras"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/p1_ControlledCameras"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraDirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public:


#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirector)


#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Cameras() { return STRUCT_OFFSET(ACameraDirector, Cameras); } \
	FORCEINLINE static uint32 __PPO__currentCamera() { return STRUCT_OFFSET(ACameraDirector, currentCamera); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenCameraChanges() { return STRUCT_OFFSET(ACameraDirector, TimeBetweenCameraChanges); } \
	FORCEINLINE static uint32 __PPO__SmoothBlendTime() { return STRUCT_OFFSET(ACameraDirector, SmoothBlendTime); }


#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_9_PROLOG
#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_PRIVATE_PROPERTY_OFFSET \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_SPARSE_DATA \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_RPC_WRAPPERS \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_INCLASS \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_PRIVATE_PROPERTY_OFFSET \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_SPARSE_DATA \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_INCLASS_NO_PURE_DECLS \
	p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P1_CONTROLLEDCAMERAS_API UClass* StaticClass<class ACameraDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID p1_ControlledCameras_Source_p1_ControlledCameras_CameraDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
