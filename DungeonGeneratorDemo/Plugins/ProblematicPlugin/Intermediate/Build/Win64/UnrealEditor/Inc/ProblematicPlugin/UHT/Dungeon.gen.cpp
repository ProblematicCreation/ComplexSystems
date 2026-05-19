// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/Dungeon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ADungeon();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_AEdgePathway_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Class ADungeon Function AddArea
struct Z_Construct_UFunction_ADungeon_AddArea_Statics
{
	struct Dungeon_eventAddArea_Parms
	{
		ANodeArea* Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_AddArea_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventAddArea_Parms, Node), Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_AddArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_AddArea_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_AddArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_AddArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "AddArea", nullptr, nullptr, Z_Construct_UFunction_ADungeon_AddArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_AddArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_AddArea_Statics::Dungeon_eventAddArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_AddArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_AddArea_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_AddArea_Statics::Dungeon_eventAddArea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_AddArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_AddArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execAddArea)
{
	P_GET_OBJECT(ANodeArea,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddArea(Z_Param_Node);
	P_NATIVE_END;
}
// End Class ADungeon Function AddArea

// Begin Class ADungeon
void ADungeon::StaticRegisterNativesADungeon()
{
	UClass* Class = ADungeon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddArea", &ADungeon::execAddArea },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeon);
UClass* Z_Construct_UClass_ADungeon_NoRegister()
{
	return ADungeon::StaticClass();
}
struct Z_Construct_UClass_ADungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dungeon.h" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CentrePoint_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodeAreas_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllEdgePathways_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CentrePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodeAreas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodeAreas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllEdgePathways_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllEdgePathways;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeon_AddArea, "AddArea" }, // 834203386
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_CentrePoint = { "CentrePoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, CentrePoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CentrePoint_MetaData), NewProp_CentrePoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas_Inner = { "AllNodeAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas = { "AllNodeAreas", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, AllNodeAreas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodeAreas_MetaData), NewProp_AllNodeAreas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways_Inner = { "AllEdgePathways", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEdgePathway_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways = { "AllEdgePathways", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, AllEdgePathways), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllEdgePathways_MetaData), NewProp_AllEdgePathways_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_CentrePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeon_Statics::ClassParams = {
	&ADungeon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeon()
{
	if (!Z_Registration_Info_UClass_ADungeon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeon.OuterSingleton, Z_Construct_UClass_ADungeon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeon.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UClass* StaticClass<ADungeon>()
{
	return ADungeon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeon);
ADungeon::~ADungeon() {}
// End Class ADungeon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 54565427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_2906345677(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
