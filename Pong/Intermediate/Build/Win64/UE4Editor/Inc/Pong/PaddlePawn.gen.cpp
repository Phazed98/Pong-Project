// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PaddlePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddlePawn() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APaddlePawn_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APaddlePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pong();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APaddlePawn::StaticRegisterNativesAPaddlePawn()
	{
	}
	UClass* Z_Construct_UClass_APaddlePawn_NoRegister()
	{
		return APaddlePawn::StaticClass();
	}
	struct Z_Construct_UClass_APaddlePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToMoveDown_MetaData[];
#endif
		static void NewProp_bWantsToMoveDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToMoveDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToMoveUp_MetaData[];
#endif
		static void NewProp_bWantsToMoveUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToMoveUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
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
	UObject* (*const Z_Construct_UClass_APaddlePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PaddlePawn.h" },
		{ "ModuleRelativePath", "PaddlePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown_MetaData[] = {
		{ "ModuleRelativePath", "PaddlePawn.h" },
	};
#endif
	void Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown_SetBit(void* Obj)
	{
		((APaddlePawn*)Obj)->bWantsToMoveDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsToMoveDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APaddlePawn), &Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp_MetaData[] = {
		{ "ModuleRelativePath", "PaddlePawn.h" },
	};
#endif
	void Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp_SetBit(void* Obj)
	{
		((APaddlePawn*)Obj)->bWantsToMoveUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsToMoveUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APaddlePawn), &Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "ModuleRelativePath", "PaddlePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_MovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APaddlePawn, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::NewProp_MovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "ModuleRelativePath", "PaddlePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_InitialLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APaddlePawn, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::NewProp_InitialLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::NewProp_InitialLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::NewProp_DefaultMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PaddlePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_DefaultMovementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultMovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APaddlePawn, DefaultMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::NewProp_DefaultMovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::NewProp_DefaultMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePawn_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PaddleMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaddlePawn.h" },
		{ "ToolTip", "The main mesh associated with this Paddle (optional sub-object)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(APaddlePawn, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddlePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_bWantsToMoveUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_InitialLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_DefaultMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddlePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddlePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddlePawn_Statics::ClassParams = {
		&APaddlePawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APaddlePawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APaddlePawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddlePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddlePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddlePawn, 2056003217);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddlePawn(Z_Construct_UClass_APaddlePawn, &APaddlePawn::StaticClass, TEXT("/Script/Pong"), TEXT("APaddlePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddlePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
