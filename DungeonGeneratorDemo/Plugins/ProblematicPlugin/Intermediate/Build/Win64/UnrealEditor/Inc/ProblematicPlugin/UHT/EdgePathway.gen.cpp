// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/EdgePathway.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdgePathway() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_AEdgePathway();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_AEdgePathway_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Class AEdgePathway
void AEdgePathway::StaticRegisterNativesAEdgePathway()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEdgePathway);
UClass* Z_Construct_UClass_AEdgePathway_NoRegister()
{
	return AEdgePathway::StaticClass();
}
struct Z_Construct_UClass_AEdgePathway_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EdgePathway.h" },
		{ "ModuleRelativePath", "Public/EdgePathway.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEdgePathway>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEdgePathway_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEdgePathway_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEdgePathway_Statics::ClassParams = {
	&AEdgePathway::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEdgePathway_Statics::Class_MetaDataParams), Z_Construct_UClass_AEdgePathway_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEdgePathway()
{
	if (!Z_Registration_Info_UClass_AEdgePathway.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEdgePathway.OuterSingleton, Z_Construct_UClass_AEdgePathway_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEdgePathway.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UClass* StaticClass<AEdgePathway>()
{
	return AEdgePathway::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEdgePathway);
AEdgePathway::~AEdgePathway() {}
// End Class AEdgePathway

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_EdgePathway_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEdgePathway, AEdgePathway::StaticClass, TEXT("AEdgePathway"), &Z_Registration_Info_UClass_AEdgePathway, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEdgePathway), 1044863295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_EdgePathway_h_1959803911(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_EdgePathway_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_EdgePathway_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
