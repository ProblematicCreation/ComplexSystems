// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProblematicPlugin/Public/UnrealC++Classes/Dungeon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ADungeon();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_AEdgePathway_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea_NoRegister();
PROBLEMATICPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Delegate FOnObjectiveCompleted
struct Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProblematicPlugin, nullptr, "OnObjectiveCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnObjectiveCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnObjectiveCompleted)
{
	OnObjectiveCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnObjectiveCompleted

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
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
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

// Begin Class ADungeon Function DecrementObjectiveRemainingCount
struct Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--==== Standard Functions ====--\n" },
#endif
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--==== Standard Functions ====--" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "DecrementObjectiveRemainingCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execDecrementObjectiveRemainingCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecrementObjectiveRemainingCount();
	P_NATIVE_END;
}
// End Class ADungeon Function DecrementObjectiveRemainingCount

// Begin Class ADungeon Function GetAllNodeAreas
struct Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics
{
	struct Dungeon_eventGetAllNodeAreas_Parms
	{
		TArray<ANodeArea*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--==== GETTERS ====--\n" },
#endif
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--==== GETTERS ====--" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventGetAllNodeAreas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "GetAllNodeAreas", nullptr, nullptr, Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::Dungeon_eventGetAllNodeAreas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::Dungeon_eventGetAllNodeAreas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_GetAllNodeAreas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_GetAllNodeAreas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execGetAllNodeAreas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ANodeArea*>*)Z_Param__Result=P_THIS->GetAllNodeAreas();
	P_NATIVE_END;
}
// End Class ADungeon Function GetAllNodeAreas

// Begin Class ADungeon Function GetCentrePoint
struct Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics
{
	struct Dungeon_eventGetCentrePoint_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventGetCentrePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "GetCentrePoint", nullptr, nullptr, Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::Dungeon_eventGetCentrePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::Dungeon_eventGetCentrePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_GetCentrePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_GetCentrePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execGetCentrePoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCentrePoint();
	P_NATIVE_END;
}
// End Class ADungeon Function GetCentrePoint

// Begin Class ADungeon Function GetRemainingObjectivesCount
struct Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics
{
	struct Dungeon_eventGetRemainingObjectivesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventGetRemainingObjectivesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "GetRemainingObjectivesCount", nullptr, nullptr, Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::Dungeon_eventGetRemainingObjectivesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::Dungeon_eventGetRemainingObjectivesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execGetRemainingObjectivesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRemainingObjectivesCount();
	P_NATIVE_END;
}
// End Class ADungeon Function GetRemainingObjectivesCount

// Begin Class ADungeon Function GetWinDisplay
struct Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics
{
	struct Dungeon_eventGetWinDisplay_Parms
	{
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventGetWinDisplay_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "GetWinDisplay", nullptr, nullptr, Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::Dungeon_eventGetWinDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::Dungeon_eventGetWinDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_GetWinDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_GetWinDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execGetWinDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=P_THIS->GetWinDisplay();
	P_NATIVE_END;
}
// End Class ADungeon Function GetWinDisplay

// Begin Class ADungeon Function SetObjectiveCount
struct Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics
{
	struct Dungeon_eventSetObjectiveCount_Parms
	{
		int32 Objectives;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--==== SETTERS ====--\n" },
#endif
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--==== SETTERS ====--" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Objectives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventSetObjectiveCount_Parms, Objectives), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::NewProp_Objectives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "SetObjectiveCount", nullptr, nullptr, Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::Dungeon_eventSetObjectiveCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::Dungeon_eventSetObjectiveCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_SetObjectiveCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_SetObjectiveCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execSetObjectiveCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Objectives);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectiveCount(Z_Param_Objectives);
	P_NATIVE_END;
}
// End Class ADungeon Function SetObjectiveCount

// Begin Class ADungeon Function SetWinDisplay
struct Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics
{
	struct Dungeon_eventSetWinDisplay_Parms
	{
		TSubclassOf<UUserWidget> WinWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WinWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::NewProp_WinWidget = { "WinWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventSetWinDisplay_Parms, WinWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::NewProp_WinWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "SetWinDisplay", nullptr, nullptr, Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::Dungeon_eventSetWinDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::Dungeon_eventSetWinDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_SetWinDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_SetWinDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execSetWinDisplay)
{
	P_GET_OBJECT(UClass,Z_Param_WinWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWinDisplay(Z_Param_WinWidget);
	P_NATIVE_END;
}
// End Class ADungeon Function SetWinDisplay

// Begin Class ADungeon
void ADungeon::StaticRegisterNativesADungeon()
{
	UClass* Class = ADungeon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddArea", &ADungeon::execAddArea },
		{ "DecrementObjectiveRemainingCount", &ADungeon::execDecrementObjectiveRemainingCount },
		{ "GetAllNodeAreas", &ADungeon::execGetAllNodeAreas },
		{ "GetCentrePoint", &ADungeon::execGetCentrePoint },
		{ "GetRemainingObjectivesCount", &ADungeon::execGetRemainingObjectivesCount },
		{ "GetWinDisplay", &ADungeon::execGetWinDisplay },
		{ "SetObjectiveCount", &ADungeon::execSetObjectiveCount },
		{ "SetWinDisplay", &ADungeon::execSetWinDisplay },
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
		{ "IncludePath", "UnrealC++Classes/Dungeon.h" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CentrePoint_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodeAreas_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllEdgePathways_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveCompleted_MetaData[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinDisplayClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinDisplayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealC++Classes/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CentrePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodeAreas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodeAreas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllEdgePathways_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllEdgePathways;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveCompleted;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WinDisplayClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WinDisplayWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeon_AddArea, "AddArea" }, // 1380919359
		{ &Z_Construct_UFunction_ADungeon_DecrementObjectiveRemainingCount, "DecrementObjectiveRemainingCount" }, // 3169396592
		{ &Z_Construct_UFunction_ADungeon_GetAllNodeAreas, "GetAllNodeAreas" }, // 1425915669
		{ &Z_Construct_UFunction_ADungeon_GetCentrePoint, "GetCentrePoint" }, // 2219789400
		{ &Z_Construct_UFunction_ADungeon_GetRemainingObjectivesCount, "GetRemainingObjectivesCount" }, // 3695741077
		{ &Z_Construct_UFunction_ADungeon_GetWinDisplay, "GetWinDisplay" }, // 239200747
		{ &Z_Construct_UFunction_ADungeon_SetObjectiveCount, "SetObjectiveCount" }, // 1775415050
		{ &Z_Construct_UFunction_ADungeon_SetWinDisplay, "SetWinDisplay" }, // 943331724
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
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_OnObjectiveCompleted = { "OnObjectiveCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, OnObjectiveCompleted), Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObjectiveCompleted_MetaData), NewProp_OnObjectiveCompleted_MetaData) }; // 806112461
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_WinDisplayClass = { "WinDisplayClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, WinDisplayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinDisplayClass_MetaData), NewProp_WinDisplayClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_WinDisplayWidget = { "WinDisplayWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, WinDisplayWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinDisplayWidget_MetaData), NewProp_WinDisplayWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_CentrePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_OnObjectiveCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_WinDisplayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_WinDisplayWidget,
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
struct Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_Dungeon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 3764235558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_Dungeon_h_4104985650(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_Dungeon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
