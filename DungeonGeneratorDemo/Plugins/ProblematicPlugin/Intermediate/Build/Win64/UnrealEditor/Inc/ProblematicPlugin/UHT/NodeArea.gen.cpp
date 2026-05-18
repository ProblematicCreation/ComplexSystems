// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/NodeArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeArea() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Class ANodeArea
void ANodeArea::StaticRegisterNativesANodeArea()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANodeArea);
UClass* Z_Construct_UClass_ANodeArea_NoRegister()
{
	return ANodeArea::StaticClass();
}
struct Z_Construct_UClass_ANodeArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NodeArea.h" },
		{ "ModuleRelativePath", "Public/NodeArea.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANodeArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANodeArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANodeArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANodeArea_Statics::ClassParams = {
	&ANodeArea::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANodeArea_Statics::Class_MetaDataParams), Z_Construct_UClass_ANodeArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANodeArea()
{
	if (!Z_Registration_Info_UClass_ANodeArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANodeArea.OuterSingleton, Z_Construct_UClass_ANodeArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANodeArea.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UClass* StaticClass<ANodeArea>()
{
	return ANodeArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANodeArea);
ANodeArea::~ANodeArea() {}
// End Class ANodeArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANodeArea, ANodeArea::StaticClass, TEXT("ANodeArea"), &Z_Registration_Info_UClass_ANodeArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANodeArea), 2720531719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_2116452937(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
