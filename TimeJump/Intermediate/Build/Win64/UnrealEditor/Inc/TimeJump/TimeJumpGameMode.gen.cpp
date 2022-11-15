// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeJump/TimeJumpGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeJumpGameMode() {}
// Cross Module References
	TIMEJUMP_API UClass* Z_Construct_UClass_ATimeJumpGameMode_NoRegister();
	TIMEJUMP_API UClass* Z_Construct_UClass_ATimeJumpGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TimeJump();
// End Cross Module References
	void ATimeJumpGameMode::StaticRegisterNativesATimeJumpGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeJumpGameMode);
	UClass* Z_Construct_UClass_ATimeJumpGameMode_NoRegister()
	{
		return ATimeJumpGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATimeJumpGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeJumpGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeJump,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeJumpGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimeJumpGameMode.h" },
		{ "ModuleRelativePath", "TimeJumpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeJumpGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeJumpGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeJumpGameMode_Statics::ClassParams = {
		&ATimeJumpGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATimeJumpGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeJumpGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeJumpGameMode()
	{
		if (!Z_Registration_Info_UClass_ATimeJumpGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeJumpGameMode.OuterSingleton, Z_Construct_UClass_ATimeJumpGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimeJumpGameMode.OuterSingleton;
	}
	template<> TIMEJUMP_API UClass* StaticClass<ATimeJumpGameMode>()
	{
		return ATimeJumpGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeJumpGameMode);
	struct Z_CompiledInDeferFile_FID_TimeJump_Source_TimeJump_TimeJumpGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimeJump_Source_TimeJump_TimeJumpGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimeJumpGameMode, ATimeJumpGameMode::StaticClass, TEXT("ATimeJumpGameMode"), &Z_Registration_Info_UClass_ATimeJumpGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeJumpGameMode), 1959148466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimeJump_Source_TimeJump_TimeJumpGameMode_h_1864308708(TEXT("/Script/TimeJump"),
		Z_CompiledInDeferFile_FID_TimeJump_Source_TimeJump_TimeJumpGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimeJump_Source_TimeJump_TimeJumpGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
