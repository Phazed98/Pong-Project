// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongHUD_generated_h
#error "PongHUD.generated.h already included, missing '#pragma once' in PongHUD.h"
#endif
#define PONG_PongHUD_generated_h

#define Pong_Source_Pong_PongHUD_h_16_RPC_WRAPPERS
#define Pong_Source_Pong_PongHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PongHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongHUD(); \
	friend struct Z_Construct_UClass_APongHUD_Statics; \
public: \
	DECLARE_CLASS(APongHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongHUD)


#define Pong_Source_Pong_PongHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPongHUD(); \
	friend struct Z_Construct_UClass_APongHUD_Statics; \
public: \
	DECLARE_CLASS(APongHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongHUD)


#define Pong_Source_Pong_PongHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongHUD(APongHUD&&); \
	NO_API APongHUD(const APongHUD&); \
public:


#define Pong_Source_Pong_PongHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongHUD(APongHUD&&); \
	NO_API APongHUD(const APongHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongHUD)


#define Pong_Source_Pong_PongHUD_h_16_PRIVATE_PROPERTY_OFFSET
#define Pong_Source_Pong_PongHUD_h_13_PROLOG
#define Pong_Source_Pong_PongHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongHUD_h_16_RPC_WRAPPERS \
	Pong_Source_Pong_PongHUD_h_16_INCLASS \
	Pong_Source_Pong_PongHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PongHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PongHUD_h_16_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PongHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PongHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
