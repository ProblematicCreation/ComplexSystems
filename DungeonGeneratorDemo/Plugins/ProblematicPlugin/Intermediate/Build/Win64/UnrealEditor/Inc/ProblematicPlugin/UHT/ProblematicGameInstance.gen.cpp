// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/ProblematicGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProblematicGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_AEdgePathway_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicGameInstance();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Class UProblematicGameInstance Function CachedDungeonToGenerate
struct Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics
{
	struct ProblematicGameInstance_eventCachedDungeonToGenerate_Parms
	{
		TArray<ANodeArea*> Nodes;
		AEdgePathway* EdgeAsset;
		FVector2D MapLocation;
		float NodeAreaSpawnRadius;
		int32 NodeAreaAmountToSpawn;
		TArray<int32> SpawnFrequencyPerRoom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Instance Functions" },
		{ "ModuleRelativePath", "Public/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeAreaSpawnRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeAreaAmountToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnFrequencyPerRoom_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnFrequencyPerRoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_EdgeAsset = { "EdgeAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, EdgeAsset), Z_Construct_UClass_AEdgePathway_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_MapLocation = { "MapLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, MapLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_NodeAreaSpawnRadius = { "NodeAreaSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, NodeAreaSpawnRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_NodeAreaAmountToSpawn = { "NodeAreaAmountToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, NodeAreaAmountToSpawn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_SpawnFrequencyPerRoom_Inner = { "SpawnFrequencyPerRoom", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_SpawnFrequencyPerRoom = { "SpawnFrequencyPerRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, SpawnFrequencyPerRoom), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_EdgeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_MapLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_NodeAreaSpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_NodeAreaAmountToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_SpawnFrequencyPerRoom_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_SpawnFrequencyPerRoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicGameInstance, nullptr, "CachedDungeonToGenerate", nullptr, nullptr, Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::ProblematicGameInstance_eventCachedDungeonToGenerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::ProblematicGameInstance_eventCachedDungeonToGenerate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicGameInstance::execCachedDungeonToGenerate)
{
	P_GET_TARRAY(ANodeArea*,Z_Param_Nodes);
	P_GET_OBJECT(AEdgePathway,Z_Param_EdgeAsset);
	P_GET_STRUCT(FVector2D,Z_Param_MapLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NodeAreaSpawnRadius);
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeAreaAmountToSpawn);
	P_GET_TARRAY(int32,Z_Param_SpawnFrequencyPerRoom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CachedDungeonToGenerate(Z_Param_Nodes,Z_Param_EdgeAsset,Z_Param_MapLocation,Z_Param_NodeAreaSpawnRadius,Z_Param_NodeAreaAmountToSpawn,Z_Param_SpawnFrequencyPerRoom);
	P_NATIVE_END;
}
// End Class UProblematicGameInstance Function CachedDungeonToGenerate

// Begin Class UProblematicGameInstance Function GenerateDungeonOnOpen
struct Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Instance Functions" },
		{ "ModuleRelativePath", "Public/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicGameInstance, nullptr, "GenerateDungeonOnOpen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicGameInstance::execGenerateDungeonOnOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateDungeonOnOpen();
	P_NATIVE_END;
}
// End Class UProblematicGameInstance Function GenerateDungeonOnOpen

// Begin Class UProblematicGameInstance
void UProblematicGameInstance::StaticRegisterNativesUProblematicGameInstance()
{
	UClass* Class = UProblematicGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CachedDungeonToGenerate", &UProblematicGameInstance::execCachedDungeonToGenerate },
		{ "GenerateDungeonOnOpen", &UProblematicGameInstance::execGenerateDungeonOnOpen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProblematicGameInstance);
UClass* Z_Construct_UClass_UProblematicGameInstance_NoRegister()
{
	return UProblematicGameInstance::StaticClass();
}
struct Z_Construct_UClass_UProblematicGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProblematicGameInstance.h" },
		{ "ModuleRelativePath", "Public/ProblematicGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate, "CachedDungeonToGenerate" }, // 1086523900
		{ &Z_Construct_UFunction_UProblematicGameInstance_GenerateDungeonOnOpen, "GenerateDungeonOnOpen" }, // 3317038436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProblematicGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProblematicGameInstance_Statics::NewProp_CachedNodes_Inner = { "CachedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProblematicGameInstance_Statics::NewProp_CachedNodes = { "CachedNodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProblematicGameInstance, CachedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedNodes_MetaData), NewProp_CachedNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProblematicGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProblematicGameInstance_Statics::NewProp_CachedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProblematicGameInstance_Statics::NewProp_CachedNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProblematicGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProblematicGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProblematicGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProblematicGameInstance_Statics::ClassParams = {
	&UProblematicGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProblematicGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProblematicGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProblematicGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UProblematicGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProblematicGameInstance()
{
	if (!Z_Registration_Info_UClass_UProblematicGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProblematicGameInstance.OuterSingleton, Z_Construct_UClass_UProblematicGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProblematicGameInstance.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UClass* StaticClass<UProblematicGameInstance>()
{
	return UProblematicGameInstance::StaticClass();
}
UProblematicGameInstance::UProblematicGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProblematicGameInstance);
UProblematicGameInstance::~UProblematicGameInstance() {}
// End Class UProblematicGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProblematicGameInstance, UProblematicGameInstance::StaticClass, TEXT("UProblematicGameInstance"), &Z_Registration_Info_UClass_UProblematicGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProblematicGameInstance), 3179072764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicGameInstance_h_2989694102(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
