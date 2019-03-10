// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongAIController() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongAIController_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Pong();
	PONG_API UClass* Z_Construct_UClass_APongBall_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APaddlePawn_NoRegister();
// End Cross Module References
	void APongAIController::StaticRegisterNativesAPongAIController()
	{
	}
	UClass* Z_Construct_UClass_APongAIController_NoRegister()
	{
		return APongAIController::StaticClass();
	}
	struct Z_Construct_UClass_APongAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyPaddlePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyPaddlePawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PongAIController.h" },
		{ "ModuleRelativePath", "PongAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongAIController_Statics::NewProp_TargetBall_MetaData[] = {
		{ "ModuleRelativePath", "PongAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongAIController_Statics::NewProp_TargetBall = { UE4CodeGen_Private::EPropertyClass::Object, "TargetBall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongAIController, TargetBall), Z_Construct_UClass_APongBall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongAIController_Statics::NewProp_TargetBall_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongAIController_Statics::NewProp_TargetBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongAIController_Statics::NewProp_MyPaddlePawn_MetaData[] = {
		{ "ModuleRelativePath", "PongAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongAIController_Statics::NewProp_MyPaddlePawn = { UE4CodeGen_Private::EPropertyClass::Object, "MyPaddlePawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(APongAIController, MyPaddlePawn), Z_Construct_UClass_APaddlePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongAIController_Statics::NewProp_MyPaddlePawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongAIController_Statics::NewProp_MyPaddlePawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongAIController_Statics::NewProp_TargetBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongAIController_Statics::NewProp_MyPaddlePawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongAIController_Statics::ClassParams = {
		&APongAIController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		Z_Construct_UClass_APongAIController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APongAIController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APongAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongAIController, 4264798621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongAIController(Z_Construct_UClass_APongAIController, &APongAIController::StaticClass, TEXT("/Script/Pong"), TEXT("APongAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
