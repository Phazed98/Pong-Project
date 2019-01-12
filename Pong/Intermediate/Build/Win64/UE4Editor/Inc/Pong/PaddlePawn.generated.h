// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PaddlePawn_generated_h
#error "PaddlePawn.generated.h already included, missing '#pragma once' in PaddlePawn.h"
#endif
#define PONG_PaddlePawn_generated_h

#define Pong_Source_Pong_PaddlePawn_h_12_RPC_WRAPPERS
#define Pong_Source_Pong_PaddlePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PaddlePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddlePawn(); \
	friend struct Z_Construct_UClass_APaddlePawn_Statics; \
public: \
	DECLARE_CLASS(APaddlePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APaddlePawn)


#define Pong_Source_Pong_PaddlePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPaddlePawn(); \
	friend struct Z_Construct_UClass_APaddlePawn_Statics; \
public: \
	DECLARE_CLASS(APaddlePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APaddlePawn)


#define Pong_Source_Pong_PaddlePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddlePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddlePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddlePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddlePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddlePawn(APaddlePawn&&); \
	NO_API APaddlePawn(const APaddlePawn&); \
public:


#define Pong_Source_Pong_PaddlePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddlePawn(APaddlePawn&&); \
	NO_API APaddlePawn(const APaddlePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddlePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddlePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddlePawn)


#define Pong_Source_Pong_PaddlePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultMovementSpeed() { return STRUCT_OFFSET(APaddlePawn, DefaultMovementSpeed); } \
	FORCEINLINE static uint32 __PPO__InitialLocation() { return STRUCT_OFFSET(APaddlePawn, InitialLocation); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(APaddlePawn, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__bWantsToMoveUp() { return STRUCT_OFFSET(APaddlePawn, bWantsToMoveUp); } \
	FORCEINLINE static uint32 __PPO__bWantsToMoveDown() { return STRUCT_OFFSET(APaddlePawn, bWantsToMoveDown); }


#define Pong_Source_Pong_PaddlePawn_h_9_PROLOG
#define Pong_Source_Pong_PaddlePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PaddlePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PaddlePawn_h_12_RPC_WRAPPERS \
	Pong_Source_Pong_PaddlePawn_h_12_INCLASS \
	Pong_Source_Pong_PaddlePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PaddlePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PaddlePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PaddlePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PaddlePawn_h_12_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PaddlePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PaddlePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
