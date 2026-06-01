// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGeneratorDemo/DungeonGeneratorDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGeneratorDemoGameMode() {}

// Begin Cross Module References
DUNGEONGENERATORDEMO_API UClass* Z_Construct_UClass_ADungeonGeneratorDemoGameMode();
DUNGEONGENERATORDEMO_API UClass* Z_Construct_UClass_ADungeonGeneratorDemoGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DungeonGeneratorDemo();
// End Cross Module References

// Begin Class ADungeonGeneratorDemoGameMode
void ADungeonGeneratorDemoGameMode::StaticRegisterNativesADungeonGeneratorDemoGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGeneratorDemoGameMode);
UClass* Z_Construct_UClass_ADungeonGeneratorDemoGameMode_NoRegister()
{
	return ADungeonGeneratorDemoGameMode::StaticClass();
}
struct Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DungeonGeneratorDemoGameMode.h" },
		{ "ModuleRelativePath", "DungeonGeneratorDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGeneratorDemoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonGeneratorDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics::ClassParams = {
	&ADungeonGeneratorDemoGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGeneratorDemoGameMode()
{
	if (!Z_Registration_Info_UClass_ADungeonGeneratorDemoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGeneratorDemoGameMode.OuterSingleton, Z_Construct_UClass_ADungeonGeneratorDemoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGeneratorDemoGameMode.OuterSingleton;
}
template<> DUNGEONGENERATORDEMO_API UClass* StaticClass<ADungeonGeneratorDemoGameMode>()
{
	return ADungeonGeneratorDemoGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGeneratorDemoGameMode);
ADungeonGeneratorDemoGameMode::~ADungeonGeneratorDemoGameMode() {}
// End Class ADungeonGeneratorDemoGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGeneratorDemoGameMode, ADungeonGeneratorDemoGameMode::StaticClass, TEXT("ADungeonGeneratorDemoGameMode"), &Z_Registration_Info_UClass_ADungeonGeneratorDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGeneratorDemoGameMode), 2842656560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoGameMode_h_1612683238(TEXT("/Script/DungeonGeneratorDemo"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
