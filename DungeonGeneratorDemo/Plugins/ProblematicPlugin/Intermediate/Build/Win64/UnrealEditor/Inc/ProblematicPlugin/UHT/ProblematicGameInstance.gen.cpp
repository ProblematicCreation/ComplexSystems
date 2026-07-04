// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/UnrealC++Classes/ProblematicGameInstance.h"
#include "ProblematicPlugin/Public/UnrealC++Classes/ProblematicFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProblematicGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicGameInstance();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_UProblematicGameInstance_NoRegister();
PROBLEMATICPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAreaAndFrequency();
PROBLEMATICPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCachedData();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin ScriptStruct FCachedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedData;
class UScriptStruct* FCachedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedData, (UObject*)Z_Construct_UPackage__Script_ProblematicPlugin(), TEXT("CachedData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedData.OuterSingleton;
}
template<> PROBLEMATICPLUGIN_API UScriptStruct* StaticStruct<FCachedData>()
{
	return FCachedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesAndFrequency_MetaData[] = {
		{ "Category", "CachedData" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLocation_MetaData[] = {
		{ "Category", "CachedData" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAreaSpawnRadius_MetaData[] = {
		{ "Category", "CachedData" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAreaPerimeterMultiplier_MetaData[] = {
		{ "Category", "CachedData" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAreaAmountToSpawn_MetaData[] = {
		{ "Category", "CachedData" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodesAndFrequency_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesAndFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeAreaSpawnRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeAreaPerimeterMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeAreaAmountToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodesAndFrequency_Inner = { "NodesAndFrequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAreaAndFrequency, METADATA_PARAMS(0, nullptr) }; // 2998973461
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodesAndFrequency = { "NodesAndFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedData, NodesAndFrequency), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesAndFrequency_MetaData), NewProp_NodesAndFrequency_MetaData) }; // 2998973461
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_DungeonLocation = { "DungeonLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedData, DungeonLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLocation_MetaData), NewProp_DungeonLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodeAreaSpawnRadius = { "NodeAreaSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedData, NodeAreaSpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAreaSpawnRadius_MetaData), NewProp_NodeAreaSpawnRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodeAreaPerimeterMultiplier = { "NodeAreaPerimeterMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedData, NodeAreaPerimeterMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAreaPerimeterMultiplier_MetaData), NewProp_NodeAreaPerimeterMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodeAreaAmountToSpawn = { "NodeAreaAmountToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedData, NodeAreaAmountToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAreaAmountToSpawn_MetaData), NewProp_NodeAreaAmountToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodesAndFrequency_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodesAndFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_DungeonLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodeAreaSpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodeAreaPerimeterMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedData_Statics::NewProp_NodeAreaAmountToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProblematicPlugin,
	nullptr,
	&NewStructOps,
	"CachedData",
	Z_Construct_UScriptStruct_FCachedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedData_Statics::PropPointers),
	sizeof(FCachedData),
	alignof(FCachedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedData()
{
	if (!Z_Registration_Info_UScriptStruct_CachedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedData.InnerSingleton, Z_Construct_UScriptStruct_FCachedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedData.InnerSingleton;
}
// End ScriptStruct FCachedData

// Begin Class UProblematicGameInstance Function CachedDungeonToGenerate
struct Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics
{
	struct ProblematicGameInstance_eventCachedDungeonToGenerate_Parms
	{
		TArray<FAreaAndFrequency> AreasAndFrequency;
		FVector2D MapLocation;
		float MapSpawnCircle;
		float OuterPerimeterSizeMultiplier;
		int32 RoomAmountToSpawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Instance Functions" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreasAndFrequency_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AreasAndFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapSpawnCircle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterPerimeterSizeMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAmountToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_AreasAndFrequency_Inner = { "AreasAndFrequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAreaAndFrequency, METADATA_PARAMS(0, nullptr) }; // 2998973461
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_AreasAndFrequency = { "AreasAndFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, AreasAndFrequency), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2998973461
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_MapLocation = { "MapLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, MapLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_MapSpawnCircle = { "MapSpawnCircle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, MapSpawnCircle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_OuterPerimeterSizeMultiplier = { "OuterPerimeterSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, OuterPerimeterSizeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_RoomAmountToSpawn = { "RoomAmountToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventCachedDungeonToGenerate_Parms, RoomAmountToSpawn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_AreasAndFrequency_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_AreasAndFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_MapLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_MapSpawnCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_OuterPerimeterSizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate_Statics::NewProp_RoomAmountToSpawn,
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
	P_GET_TARRAY(FAreaAndFrequency,Z_Param_AreasAndFrequency);
	P_GET_STRUCT(FVector2D,Z_Param_MapLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MapSpawnCircle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OuterPerimeterSizeMultiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomAmountToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CachedDungeonToGenerate(Z_Param_AreasAndFrequency,Z_Param_MapLocation,Z_Param_MapSpawnCircle,Z_Param_OuterPerimeterSizeMultiplier,Z_Param_RoomAmountToSpawn);
	P_NATIVE_END;
}
// End Class UProblematicGameInstance Function CachedDungeonToGenerate

// Begin Class UProblematicGameInstance Function GetCachedDungeonData
struct Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics
{
	struct ProblematicGameInstance_eventGetCachedDungeonData_Parms
	{
		FCachedData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Instance Functions" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProblematicGameInstance_eventGetCachedDungeonData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCachedData, METADATA_PARAMS(0, nullptr) }; // 639338955
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicGameInstance, nullptr, "GetCachedDungeonData", nullptr, nullptr, Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::ProblematicGameInstance_eventGetCachedDungeonData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::ProblematicGameInstance_eventGetCachedDungeonData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicGameInstance::execGetCachedDungeonData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCachedData*)Z_Param__Result=P_THIS->GetCachedDungeonData();
	P_NATIVE_END;
}
// End Class UProblematicGameInstance Function GetCachedDungeonData

// Begin Class UProblematicGameInstance Function ResetDungeonGenerationData
struct Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Instance Functions" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicGameInstance, nullptr, "ResetDungeonGenerationData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicGameInstance::execResetDungeonGenerationData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDungeonGenerationData();
	P_NATIVE_END;
}
// End Class UProblematicGameInstance Function ResetDungeonGenerationData

// Begin Class UProblematicGameInstance Function ShouldGenerateDungeonOnBeginBeginPlay
struct Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics
{
	struct ProblematicGameInstance_eventShouldGenerateDungeonOnBeginBeginPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Problematic Instance Functions" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProblematicGameInstance_eventShouldGenerateDungeonOnBeginBeginPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProblematicGameInstance_eventShouldGenerateDungeonOnBeginBeginPlay_Parms), &Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProblematicGameInstance, nullptr, "ShouldGenerateDungeonOnBeginBeginPlay", nullptr, nullptr, Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::ProblematicGameInstance_eventShouldGenerateDungeonOnBeginBeginPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::ProblematicGameInstance_eventShouldGenerateDungeonOnBeginBeginPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProblematicGameInstance::execShouldGenerateDungeonOnBeginBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldGenerateDungeonOnBeginBeginPlay();
	P_NATIVE_END;
}
// End Class UProblematicGameInstance Function ShouldGenerateDungeonOnBeginBeginPlay

// Begin Class UProblematicGameInstance
void UProblematicGameInstance::StaticRegisterNativesUProblematicGameInstance()
{
	UClass* Class = UProblematicGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CachedDungeonToGenerate", &UProblematicGameInstance::execCachedDungeonToGenerate },
		{ "GetCachedDungeonData", &UProblematicGameInstance::execGetCachedDungeonData },
		{ "ResetDungeonGenerationData", &UProblematicGameInstance::execResetDungeonGenerationData },
		{ "ShouldGenerateDungeonOnBeginBeginPlay", &UProblematicGameInstance::execShouldGenerateDungeonOnBeginBeginPlay },
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
		{ "IncludePath", "UnrealC++Classes/ProblematicGameInstance.h" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/ProblematicGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProblematicGameInstance_CachedDungeonToGenerate, "CachedDungeonToGenerate" }, // 3397037757
		{ &Z_Construct_UFunction_UProblematicGameInstance_GetCachedDungeonData, "GetCachedDungeonData" }, // 1793722803
		{ &Z_Construct_UFunction_UProblematicGameInstance_ResetDungeonGenerationData, "ResetDungeonGenerationData" }, // 3060959819
		{ &Z_Construct_UFunction_UProblematicGameInstance_ShouldGenerateDungeonOnBeginBeginPlay, "ShouldGenerateDungeonOnBeginBeginPlay" }, // 3126049884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProblematicGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UProblematicGameInstance);
UProblematicGameInstance::~UProblematicGameInstance() {}
// End Class UProblematicGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCachedData::StaticStruct, Z_Construct_UScriptStruct_FCachedData_Statics::NewStructOps, TEXT("CachedData"), &Z_Registration_Info_UScriptStruct_CachedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedData), 639338955U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProblematicGameInstance, UProblematicGameInstance::StaticClass, TEXT("UProblematicGameInstance"), &Z_Registration_Info_UClass_UProblematicGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProblematicGameInstance), 3661897558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_850842560(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
