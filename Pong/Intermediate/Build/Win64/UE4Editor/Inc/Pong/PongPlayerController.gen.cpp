// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongPlayerController() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongPlayerController_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Pong();
	PONG_API UClass* Z_Construct_UClass_APaddlePawn_NoRegister();
// End Cross Module References
	void APongPlayerController::StaticRegisterNativesAPongPlayerController()
	{
	}
	UClass* Z_Construct_UClass_APongPlayerController_NoRegister()
	{
		return APongPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APongPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyPaddlePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyPaddlePawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PongPlayerController.h" },
		{ "ModuleRelativePath", "PongPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongPlayerController_Statics::NewProp_MyPaddlePawn_MetaData[] = {
		{ "ModuleRelativePath", "PongPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongPlayerController_Statics::NewProp_MyPaddlePawn = { UE4CodeGen_Private::EPropertyClass::Object, "MyPaddlePawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongPlayerController, MyPaddlePawn), Z_Construct_UClass_APaddlePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongPlayerController_Statics::NewProp_MyPaddlePawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongPlayerController_Statics::NewProp_MyPaddlePawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongPlayerController_Statics::NewProp_MyPaddlePawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongPlayerController_Statics::ClassParams = {
		&APongPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_APongPlayerController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APongPlayerController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APongPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongPlayerController, 436949463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongPlayerController(Z_Construct_UClass_APongPlayerController, &APongPlayerController::StaticClass, TEXT("/Script/Pong"), TEXT("APongPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
