// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongAIController_generated_h
#error "PongAIController.generated.h already included, missing '#pragma once' in PongAIController.h"
#endif
#define PONG_PongAIController_generated_h

#define Pong_Source_Pong_PongAIController_h_16_RPC_WRAPPERS
#define Pong_Source_Pong_PongAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PongAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongAIController(); \
	friend struct Z_Construct_UClass_APongAIController_Statics; \
public: \
	DECLARE_CLASS(APongAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongAIController)


#define Pong_Source_Pong_PongAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPongAIController(); \
	friend struct Z_Construct_UClass_APongAIController_Statics; \
public: \
	DECLARE_CLASS(APongAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongAIController)


#define Pong_Source_Pong_PongAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongAIController(APongAIController&&); \
	NO_API APongAIController(const APongAIController&); \
public:


#define Pong_Source_Pong_PongAIController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongAIController(APongAIController&&); \
	NO_API APongAIController(const APongAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongAIController)


#define Pong_Source_Pong_PongAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyPaddlePawn() { return STRUCT_OFFSET(APongAIController, MyPaddlePawn); } \
	FORCEINLINE static uint32 __PPO__TargetBall() { return STRUCT_OFFSET(APongAIController, TargetBall); }


#define Pong_Source_Pong_PongAIController_h_13_PROLOG
#define Pong_Source_Pong_PongAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongAIController_h_16_RPC_WRAPPERS \
	Pong_Source_Pong_PongAIController_h_16_INCLASS \
	Pong_Source_Pong_PongAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PongAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PongAIController_h_16_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PongAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PongAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
