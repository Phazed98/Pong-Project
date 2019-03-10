// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongBall() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongBall_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pong();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APongBall::StaticRegisterNativesAPongBall()
	{
	}
	UClass* Z_Construct_UClass_APongBall_NoRegister()
	{
		return APongBall::StaticClass();
	}
	struct Z_Construct_UClass_APongBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMagnitudeYRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialMagnitudeYRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddleCollisionSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddleCollisionSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddleContactFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddleContactFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Lighting Rendering Component Replication Replication Input Actor HLOD Mobile Asset User Data" },
		{ "IncludePath", "PongBall.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_MovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongBall, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_MovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_InitialLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongBall, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_InitialLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_InitialLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_MovementDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongBall, MovementDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_MovementDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_MovementDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_InitialMagnitudeYRange_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_InitialMagnitudeYRange = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialMagnitudeYRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APongBall, InitialMagnitudeYRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_InitialMagnitudeYRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_InitialMagnitudeYRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_PaddleCollisionSpeedIncrease_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_PaddleCollisionSpeedIncrease = { UE4CodeGen_Private::EPropertyClass::Struct, "PaddleCollisionSpeedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APongBall, PaddleCollisionSpeedIncrease), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_PaddleCollisionSpeedIncrease_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_PaddleCollisionSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_PaddleContactFriction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_PaddleContactFriction = { UE4CodeGen_Private::EPropertyClass::Float, "PaddleContactFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APongBall, PaddleContactFriction), METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_PaddleContactFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_PaddleContactFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_DefaultMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_DefaultMovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultMovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APongBall, DefaultMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_DefaultMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_DefaultMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BallMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongBall.h" },
		{ "ToolTip", "The main mesh associated with this Paddle (optional sub-object)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(APongBall, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_InitialLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_MovementDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_InitialMagnitudeYRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_PaddleCollisionSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_PaddleContactFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_DefaultMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongBall_Statics::ClassParams = {
		&APongBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009020A0u,
		nullptr, 0,
		Z_Construct_UClass_APongBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongBall, 3880988309);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongBall(Z_Construct_UClass_APongBall, &APongBall::StaticClass, TEXT("/Script/Pong"), TEXT("APongBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
