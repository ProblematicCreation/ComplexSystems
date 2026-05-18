// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/ProblematicFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProblematicFunctions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicFunctions();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Class UProblematicFunctions
void UProblematicFunctions::StaticRegisterNativesUProblematicFunctions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProblematicFunctions);
UClass* Z_Construct_UClass_UProblematicFunctions_NoRegister()
{
	return UProblematicFunctions::StaticClass();
}
struct Z_Construct_UClass_UProblematicFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProblematicFunctions.h" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProblematicFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProblematicFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProblematicFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProblematicFunctions_Statics::ClassParams = {
	&UProblematicFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProblematicFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UProblematicFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProblematicFunctions()
{
	if (!Z_Registration_Info_UClass_UProblematicFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProblematicFunctions.OuterSingleton, Z_Construct_UClass_UProblematicFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProblematicFunctions.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UClass* StaticClass<UProblematicFunctions>()
{
	return UProblematicFunctions::StaticClass();
}
UProblematicFunctions::UProblematicFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProblematicFunctions);
UProblematicFunctions::~UProblematicFunctions() {}
// End Class UProblematicFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProblematicFunctions, UProblematicFunctions::StaticClass, TEXT("UProblematicFunctions"), &Z_Registration_Info_UClass_UProblematicFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProblematicFunctions), 3398828684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_2552752392(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
