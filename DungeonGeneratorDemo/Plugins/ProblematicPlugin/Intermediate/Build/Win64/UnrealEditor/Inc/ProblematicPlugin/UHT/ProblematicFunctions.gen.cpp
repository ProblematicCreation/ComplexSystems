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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_AEdgePathway_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicFunctions();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicFunctions_NoRegister();
PROBLEMATICPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAreaAndFrequency();
PROBLEMATICPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDelaunayEdge();
PROBLEMATICPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix3x3();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin ScriptStruct FAreaAndFrequency
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AreaAndFrequency;
class UScriptStruct* FAreaAndFrequency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AreaAndFrequency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AreaAndFrequency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAreaAndFrequency, (UObject*)Z_Construct_UPackage__Script_ProblematicPlugin(), TEXT("AreaAndFrequency"));
	}
	return Z_Registration_Info_UScriptStruct_AreaAndFrequency.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UScriptStruct* StaticStruct<FAreaAndFrequency>()
{
	return FAreaAndFrequency::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAreaAndFrequency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyMinimum_MetaData[] = {
		{ "Category", "AreaAndFrequency" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAreaClass_MetaData[] = {
		{ "Category", "AreaAndFrequency" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrequencyMinimum;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NodeAreaClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAreaAndFrequency>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::NewProp_FrequencyMinimum = { "FrequencyMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAreaAndFrequency, FrequencyMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyMinimum_MetaData), NewProp_FrequencyMinimum_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::NewProp_NodeAreaClass = { "NodeAreaClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAreaAndFrequency, NodeAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAreaClass_MetaData), NewProp_NodeAreaClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::NewProp_FrequencyMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::NewProp_NodeAreaClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
	nullptr,
	&NewStructOps,
	"AreaAndFrequency",
	Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::PropPointers),
	sizeof(FAreaAndFrequency),
	alignof(FAreaAndFrequency),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAreaAndFrequency()
{
	if (!Z_Registration_Info_UScriptStruct_AreaAndFrequency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AreaAndFrequency.InnerSingleton, Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AreaAndFrequency.InnerSingleton;
}
// End ScriptStruct FAreaAndFrequency

// Begin ScriptStruct FMatrix3x3
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Matrix3x3;
class UScriptStruct* FMatrix3x3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix3x3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Matrix3x3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrix3x3, (UObject*)Z_Construct_UPackage__Script_ProblematicPlugin(), TEXT("Matrix3x3"));
	}
	return Z_Registration_Info_UScriptStruct_Matrix3x3.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UScriptStruct* StaticStruct<FMatrix3x3>()
{
	return FMatrix3x3::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrix3x3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[] = {
		{ "Category", "Mathematics" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[] = {
		{ "Category", "Mathematics" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[] = {
		{ "Category", "Mathematics" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrix3x3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix3x3, Row1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row1_MetaData), NewProp_Row1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix3x3, Row2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row2_MetaData), NewProp_Row2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix3x3, Row3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row3_MetaData), NewProp_Row3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrix3x3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewProp_Row1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewProp_Row2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewProp_Row3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix3x3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrix3x3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
	nullptr,
	&NewStructOps,
	"Matrix3x3",
	Z_Construct_UScriptStruct_FMatrix3x3_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix3x3_Statics::PropPointers),
	sizeof(FMatrix3x3),
	alignof(FMatrix3x3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix3x3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrix3x3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrix3x3()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix3x3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Matrix3x3.InnerSingleton, Z_Construct_UScriptStruct_FMatrix3x3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Matrix3x3.InnerSingleton;
}
// End ScriptStruct FMatrix3x3

// Begin ScriptStruct FDelaunayEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DelaunayEdge;
class UScriptStruct* FDelaunayEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DelaunayEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DelaunayEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelaunayEdge, (UObject*)Z_Construct_UPackage__Script_ProblematicPlugin(), TEXT("DelaunayEdge"));
	}
	return Z_Registration_Info_UScriptStruct_DelaunayEdge.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UScriptStruct* StaticStruct<FDelaunayEdge>()
{
	return FDelaunayEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDelaunayEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "DelaunayEdge" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "DelaunayEdge" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelaunayEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelaunayEdge_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDelaunayEdge, StartPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelaunayEdge_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDelaunayEdge, EndPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelaunayEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelaunayEdge_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelaunayEdge_Statics::NewProp_EndPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelaunayEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelaunayEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
	nullptr,
	&NewStructOps,
	"DelaunayEdge",
	Z_Construct_UScriptStruct_FDelaunayEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelaunayEdge_Statics::PropPointers),
	sizeof(FDelaunayEdge),
	alignof(FDelaunayEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelaunayEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDelaunayEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDelaunayEdge()
{
	if (!Z_Registration_Info_UScriptStruct_DelaunayEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DelaunayEdge.InnerSingleton, Z_Construct_UScriptStruct_FDelaunayEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DelaunayEdge.InnerSingleton;
}
// End ScriptStruct FDelaunayEdge

// Begin Class UProblematicFunctions Function GenerateDungeonAndLoadLevel
struct Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics
{
	struct ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms
	{
		FName LevelToLoad;
		TArray<FAreaAndFrequency> NodesAndFrequency;
		AEdgePathway* EdgeAsset;
		FVector2D MapLocation;
		float MapSpawnCircle;
		int32 RoomAmountToSpawn;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Functions" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToLoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodesAndFrequency_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesAndFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapSpawnCircle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAmountToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, LevelToLoad), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_NodesAndFrequency_Inner = { "NodesAndFrequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAreaAndFrequency, METADATA_PARAMS(0, nullptr) }; // 1512496352
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_NodesAndFrequency = { "NodesAndFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, NodesAndFrequency), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1512496352
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_EdgeAsset = { "EdgeAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, EdgeAsset), Z_Construct_UClass_AEdgePathway_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_MapLocation = { "MapLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, MapLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_MapSpawnCircle = { "MapSpawnCircle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, MapSpawnCircle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_RoomAmountToSpawn = { "RoomAmountToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, RoomAmountToSpawn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_LevelToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_NodesAndFrequency_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_NodesAndFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_EdgeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_MapLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_MapSpawnCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_RoomAmountToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicFunctions, nullptr, "GenerateDungeonAndLoadLevel", nullptr, nullptr, Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::ProblematicFunctions_eventGenerateDungeonAndLoadLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicFunctions::execGenerateDungeonAndLoadLevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelToLoad);
	P_GET_TARRAY(FAreaAndFrequency,Z_Param_NodesAndFrequency);
	P_GET_OBJECT(AEdgePathway,Z_Param_EdgeAsset);
	P_GET_STRUCT(FVector2D,Z_Param_MapLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapSpawnCircle);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomAmountToSpawn);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProblematicFunctions::GenerateDungeonAndLoadLevel(Z_Param_LevelToLoad,Z_Param_NodesAndFrequency,Z_Param_EdgeAsset,Z_Param_MapLocation,Z_Param_MapSpawnCircle,Z_Param_RoomAmountToSpawn,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UProblematicFunctions Function GenerateDungeonAndLoadLevel

// Begin Class UProblematicFunctions Function GenerateDungeonMap
struct Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics
{
	struct ProblematicFunctions_eventGenerateDungeonMap_Parms
	{
		TArray<FAreaAndFrequency> AreasAndFrequency;
		AEdgePathway* EdgeAsset;
		FVector2D MapLocation;
		float MapSpawnCircle;
		float OuterPerimeterSizeMultiplier;
		int32 RoomAmountToSpawn;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Functions" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreasAndFrequency_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AreasAndFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapSpawnCircle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterPerimeterSizeMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAmountToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_AreasAndFrequency_Inner = { "AreasAndFrequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAreaAndFrequency, METADATA_PARAMS(0, nullptr) }; // 1512496352
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_AreasAndFrequency = { "AreasAndFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, AreasAndFrequency), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1512496352
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_EdgeAsset = { "EdgeAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, EdgeAsset), Z_Construct_UClass_AEdgePathway_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_MapLocation = { "MapLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, MapLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_MapSpawnCircle = { "MapSpawnCircle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, MapSpawnCircle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_OuterPerimeterSizeMultiplier = { "OuterPerimeterSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, OuterPerimeterSizeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_RoomAmountToSpawn = { "RoomAmountToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, RoomAmountToSpawn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicFunctions_eventGenerateDungeonMap_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_AreasAndFrequency_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_AreasAndFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_EdgeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_MapLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_MapSpawnCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_OuterPerimeterSizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_RoomAmountToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicFunctions, nullptr, "GenerateDungeonMap", nullptr, nullptr, Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::ProblematicFunctions_eventGenerateDungeonMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::ProblematicFunctions_eventGenerateDungeonMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicFunctions::execGenerateDungeonMap)
{
	P_GET_TARRAY(FAreaAndFrequency,Z_Param_AreasAndFrequency);
	P_GET_OBJECT(AEdgePathway,Z_Param_EdgeAsset);
	P_GET_STRUCT(FVector2D,Z_Param_MapLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapSpawnCircle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OuterPerimeterSizeMultiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomAmountToSpawn);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProblematicFunctions::GenerateDungeonMap(Z_Param_AreasAndFrequency,Z_Param_EdgeAsset,Z_Param_MapLocation,Z_Param_MapSpawnCircle,Z_Param_OuterPerimeterSizeMultiplier,Z_Param_RoomAmountToSpawn,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UProblematicFunctions Function GenerateDungeonMap

// Begin Class UProblematicFunctions
void UProblematicFunctions::StaticRegisterNativesUProblematicFunctions()
{
	UClass* Class = UProblematicFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateDungeonAndLoadLevel", &UProblematicFunctions::execGenerateDungeonAndLoadLevel },
		{ "GenerateDungeonMap", &UProblematicFunctions::execGenerateDungeonMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "ProblematicFunctions.h" },
		{ "ModuleRelativePath", "Public/ProblematicFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonAndLoadLevel, "GenerateDungeonAndLoadLevel" }, // 355082754
		{ &Z_Construct_UFunction_UProblematicFunctions_GenerateDungeonMap, "GenerateDungeonMap" }, // 1882766786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAreaAndFrequency::StaticStruct, Z_Construct_UScriptStruct_FAreaAndFrequency_Statics::NewStructOps, TEXT("AreaAndFrequency"), &Z_Registration_Info_UScriptStruct_AreaAndFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAreaAndFrequency), 1512496352U) },
		{ FMatrix3x3::StaticStruct, Z_Construct_UScriptStruct_FMatrix3x3_Statics::NewStructOps, TEXT("Matrix3x3"), &Z_Registration_Info_UScriptStruct_Matrix3x3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrix3x3), 2530902505U) },
		{ FDelaunayEdge::StaticStruct, Z_Construct_UScriptStruct_FDelaunayEdge_Statics::NewStructOps, TEXT("DelaunayEdge"), &Z_Registration_Info_UScriptStruct_DelaunayEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDelaunayEdge), 3814199588U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProblematicFunctions, UProblematicFunctions::StaticClass, TEXT("UProblematicFunctions"), &Z_Registration_Info_UClass_UProblematicFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProblematicFunctions), 363282520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_2698248797(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
