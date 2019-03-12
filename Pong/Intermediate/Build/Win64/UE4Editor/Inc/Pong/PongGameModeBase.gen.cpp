// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameModeBase() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongGameModeBase_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pong();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongBall_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APaddlePawn_NoRegister();
// End Cross Module References
	void APongGameModeBase::StaticRegisterNativesAPongGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APongGameModeBase_NoRegister()
	{
		return APongGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APongGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerScores;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackGroundMeshActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackGroundMeshActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Balls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Balls;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Balls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddlePawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaddlePawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaddlePawns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PongGameModeBase.h" },
		{ "ModuleRelativePath", "PongGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::NewProp_GameBounds_MetaData[] = {
		{ "ModuleRelativePath", "PongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_GameBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "GameBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongGameModeBase, GameBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_GameBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_GameBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores_MetaData[] = {
		{ "ModuleRelativePath", "PongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerScores", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongGameModeBase, PlayerScores), METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerScores", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::NewProp_CameraActor_MetaData[] = {
		{ "ModuleRelativePath", "PongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_CameraActor = { UE4CodeGen_Private::EPropertyClass::Object, "CameraActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongGameModeBase, CameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_CameraActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_CameraActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::NewProp_BackGroundMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "PongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_BackGroundMeshActor = { UE4CodeGen_Private::EPropertyClass::Object, "BackGroundMeshActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongGameModeBase, BackGroundMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_BackGroundMeshActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_BackGroundMeshActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls_MetaData[] = {
		{ "ModuleRelativePath", "PongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls = { UE4CodeGen_Private::EPropertyClass::Array, "Balls", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongGameModeBase, Balls), METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Balls", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APongBall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns_MetaData[] = {
		{ "ModuleRelativePath", "PongGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns = { UE4CodeGen_Private::EPropertyClass::Array, "PaddlePawns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongGameModeBase, PaddlePawns), METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PaddlePawns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APaddlePawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_GameBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PlayerScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_CameraActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_BackGroundMeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_Balls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameModeBase_Statics::NewProp_PaddlePawns_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongGameModeBase_Statics::ClassParams = {
		&APongGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		Z_Construct_UClass_APongGameModeBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APongGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongGameModeBase, 87353813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongGameModeBase(Z_Construct_UClass_APongGameModeBase, &APongGameModeBase::StaticClass, TEXT("/Script/Pong"), TEXT("APongGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
