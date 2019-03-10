// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongPlayerController_generated_h
#error "PongPlayerController.generated.h already included, missing '#pragma once' in PongPlayerController.h"
#endif
#define PONG_PongPlayerController_generated_h

#define Pong_Source_Pong_PongPlayerController_h_19_RPC_WRAPPERS
#define Pong_Source_Pong_PongPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PongPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongPlayerController(); \
	friend struct Z_Construct_UClass_APongPlayerController_Statics; \
public: \
	DECLARE_CLASS(APongPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayerController)


#define Pong_Source_Pong_PongPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPongPlayerController(); \
	friend struct Z_Construct_UClass_APongPlayerController_Statics; \
public: \
	DECLARE_CLASS(APongPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayerController)


#define Pong_Source_Pong_PongPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayerController(APongPlayerController&&); \
	NO_API APongPlayerController(const APongPlayerController&); \
public:


#define Pong_Source_Pong_PongPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayerController(APongPlayerController&&); \
	NO_API APongPlayerController(const APongPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongPlayerController)


#define Pong_Source_Pong_PongPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyPaddlePawn() { return STRUCT_OFFSET(APongPlayerController, MyPaddlePawn); }


#define Pong_Source_Pong_PongPlayerController_h_16_PROLOG
#define Pong_Source_Pong_PongPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongPlayerController_h_19_RPC_WRAPPERS \
	Pong_Source_Pong_PongPlayerController_h_19_INCLASS \
	Pong_Source_Pong_PongPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PongPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PongPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PongPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PongPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
