// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongGameModeBase_generated_h
#error "PongGameModeBase.generated.h already included, missing '#pragma once' in PongGameModeBase.h"
#endif
#define PONG_PongGameModeBase_generated_h

#define Pong_Source_Pong_PongGameModeBase_h_15_RPC_WRAPPERS
#define Pong_Source_Pong_PongGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PongGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongGameModeBase(); \
	friend struct Z_Construct_UClass_APongGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APongGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongGameModeBase)


#define Pong_Source_Pong_PongGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPongGameModeBase(); \
	friend struct Z_Construct_UClass_APongGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APongGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongGameModeBase)


#define Pong_Source_Pong_PongGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGameModeBase(APongGameModeBase&&); \
	NO_API APongGameModeBase(const APongGameModeBase&); \
public:


#define Pong_Source_Pong_PongGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGameModeBase(APongGameModeBase&&); \
	NO_API APongGameModeBase(const APongGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGameModeBase)


#define Pong_Source_Pong_PongGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PaddlePawns() { return STRUCT_OFFSET(APongGameModeBase, PaddlePawns); } \
	FORCEINLINE static uint32 __PPO__Balls() { return STRUCT_OFFSET(APongGameModeBase, Balls); } \
	FORCEINLINE static uint32 __PPO__BackGroundMeshActor() { return STRUCT_OFFSET(APongGameModeBase, BackGroundMeshActor); } \
	FORCEINLINE static uint32 __PPO__CameraActor() { return STRUCT_OFFSET(APongGameModeBase, CameraActor); }


#define Pong_Source_Pong_PongGameModeBase_h_12_PROLOG
#define Pong_Source_Pong_PongGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongGameModeBase_h_15_RPC_WRAPPERS \
	Pong_Source_Pong_PongGameModeBase_h_15_INCLASS \
	Pong_Source_Pong_PongGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PongGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PongGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PongGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PongGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
