// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongBall_generated_h
#error "PongBall.generated.h already included, missing '#pragma once' in PongBall.h"
#endif
#define PONG_PongBall_generated_h

#define Pong_Source_Pong_PongBall_h_13_RPC_WRAPPERS
#define Pong_Source_Pong_PongBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PongBall_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongBall(); \
	friend struct Z_Construct_UClass_APongBall_Statics; \
public: \
	DECLARE_CLASS(APongBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongBall)


#define Pong_Source_Pong_PongBall_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPongBall(); \
	friend struct Z_Construct_UClass_APongBall_Statics; \
public: \
	DECLARE_CLASS(APongBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongBall)


#define Pong_Source_Pong_PongBall_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongBall(APongBall&&); \
	NO_API APongBall(const APongBall&); \
public:


#define Pong_Source_Pong_PongBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongBall(APongBall&&); \
	NO_API APongBall(const APongBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongBall)


#define Pong_Source_Pong_PongBall_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultMovementSpeed() { return STRUCT_OFFSET(APongBall, DefaultMovementSpeed); } \
	FORCEINLINE static uint32 __PPO__PaddleContactFriction() { return STRUCT_OFFSET(APongBall, PaddleContactFriction); } \
	FORCEINLINE static uint32 __PPO__PaddleCollisionSpeedIncrease() { return STRUCT_OFFSET(APongBall, PaddleCollisionSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO__InitialMagnitudeYRange() { return STRUCT_OFFSET(APongBall, InitialMagnitudeYRange); } \
	FORCEINLINE static uint32 __PPO__MovementDirection() { return STRUCT_OFFSET(APongBall, MovementDirection); } \
	FORCEINLINE static uint32 __PPO__InitialLocation() { return STRUCT_OFFSET(APongBall, InitialLocation); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(APongBall, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__BallBounds() { return STRUCT_OFFSET(APongBall, BallBounds); } \
	FORCEINLINE static uint32 __PPO__MinMovementBounds() { return STRUCT_OFFSET(APongBall, MinMovementBounds); } \
	FORCEINLINE static uint32 __PPO__MaxMovementBounds() { return STRUCT_OFFSET(APongBall, MaxMovementBounds); }


#define Pong_Source_Pong_PongBall_h_10_PROLOG
#define Pong_Source_Pong_PongBall_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongBall_h_13_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongBall_h_13_RPC_WRAPPERS \
	Pong_Source_Pong_PongBall_h_13_INCLASS \
	Pong_Source_Pong_PongBall_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PongBall_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongBall_h_13_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PongBall_h_13_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PongBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PongBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
