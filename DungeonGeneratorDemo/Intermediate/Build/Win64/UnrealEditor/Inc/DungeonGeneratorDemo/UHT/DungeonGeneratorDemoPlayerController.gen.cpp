// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGeneratorDemo/DungeonGeneratorDemoPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGeneratorDemoPlayerController() {}

// Begin Cross Module References
DUNGEONGENERATORDEMO_API UClass* Z_Construct_UClass_ADungeonGeneratorDemoPlayerController();
DUNGEONGENERATORDEMO_API UClass* Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonGeneratorDemo();
// End Cross Module References

// Begin Class ADungeonGeneratorDemoPlayerController
void ADungeonGeneratorDemoPlayerController::StaticRegisterNativesADungeonGeneratorDemoPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGeneratorDemoPlayerController);
UClass* Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_NoRegister()
{
	return ADungeonGeneratorDemoPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DungeonGeneratorDemoPlayerController.h" },
		{ "ModuleRelativePath", "DungeonGeneratorDemoPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "DungeonGeneratorDemoPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGeneratorDemoPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorDemoPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonGeneratorDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::ClassParams = {
	&ADungeonGeneratorDemoPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGeneratorDemoPlayerController()
{
	if (!Z_Registration_Info_UClass_ADungeonGeneratorDemoPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGeneratorDemoPlayerController.OuterSingleton, Z_Construct_UClass_ADungeonGeneratorDemoPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGeneratorDemoPlayerController.OuterSingleton;
}
template<> DUNGEONGENERATORDEMO_API UClass* StaticClass<ADungeonGeneratorDemoPlayerController>()
{
	return ADungeonGeneratorDemoPlayerController::StaticClass();
}
ADungeonGeneratorDemoPlayerController::ADungeonGeneratorDemoPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGeneratorDemoPlayerController);
ADungeonGeneratorDemoPlayerController::~ADungeonGeneratorDemoPlayerController() {}
// End Class ADungeonGeneratorDemoPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGeneratorDemoPlayerController, ADungeonGeneratorDemoPlayerController::StaticClass, TEXT("ADungeonGeneratorDemoPlayerController"), &Z_Registration_Info_UClass_ADungeonGeneratorDemoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGeneratorDemoPlayerController), 2467326490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoPlayerController_h_571274126(TEXT("/Script/DungeonGeneratorDemo"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
