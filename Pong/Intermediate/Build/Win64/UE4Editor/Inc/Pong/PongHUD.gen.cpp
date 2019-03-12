// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongHUD() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongHUD_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Pong();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void APongHUD::StaticRegisterNativesAPongHUD()
	{
	}
	UClass* Z_Construct_UClass_APongHUD_NoRegister()
	{
		return APongHUD::StaticClass();
	}
	struct Z_Construct_UClass_APongHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PongHUD.h" },
		{ "ModuleRelativePath", "PongHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongHUD_Statics::NewProp_ScoreFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "ModuleRelativePath", "PongHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongHUD_Statics::NewProp_ScoreFont = { UE4CodeGen_Private::EPropertyClass::Object, "ScoreFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(APongHUD, ScoreFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongHUD_Statics::NewProp_ScoreFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongHUD_Statics::NewProp_ScoreFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongHUD_Statics::NewProp_ScoreFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongHUD_Statics::ClassParams = {
		&APongHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_APongHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APongHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongHUD, 2366275362);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongHUD(Z_Construct_UClass_APongHUD, &APongHUD::StaticClass, TEXT("/Script/Pong"), TEXT("APongHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
