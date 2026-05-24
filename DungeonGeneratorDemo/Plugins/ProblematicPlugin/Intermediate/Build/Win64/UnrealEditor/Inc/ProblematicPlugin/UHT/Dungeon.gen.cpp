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
		{ "Comment", "//--==== Getter Functions ====--\n" },
#endif
		{ "ModuleRelativePath", "Public/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--==== Getter Functions ====--" },
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

// Begin Class ADungeon Function SetFocusedNodeArea
struct Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics
{
	struct Dungeon_eventSetFocusedNodeArea_Parms
	{
		ANodeArea* Area;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Area;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventSetFocusedNodeArea_Parms, Area), Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::NewProp_Area,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "SetFocusedNodeArea", nullptr, nullptr, Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::Dungeon_eventSetFocusedNodeArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::Dungeon_eventSetFocusedNodeArea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_SetFocusedNodeArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_SetFocusedNodeArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execSetFocusedNodeArea)
{
	P_GET_OBJECT(ANodeArea,Z_Param_Area);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocusedNodeArea(Z_Param_Area);
	P_NATIVE_END;
}
// End Class ADungeon Function SetFocusedNodeArea

// Begin Class ADungeon Function SetIsUpdatingAreaPosition
struct Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Map" },
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "SetIsUpdatingAreaPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execSetIsUpdatingAreaPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsUpdatingAreaPosition();
	P_NATIVE_END;
}
// End Class ADungeon Function SetIsUpdatingAreaPosition

// Begin Class ADungeon
void ADungeon::StaticRegisterNativesADungeon()
{
	UClass* Class = ADungeon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddArea", &ADungeon::execAddArea },
		{ "GetAllNodeAreas", &ADungeon::execGetAllNodeAreas },
		{ "SetFocusedNodeArea", &ADungeon::execSetFocusedNodeArea },
		{ "SetIsUpdatingAreaPosition", &ADungeon::execSetIsUpdatingAreaPosition },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUpdatingAreaPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedNodeArea_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CentrePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodeAreas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodeAreas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllEdgePathways_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllEdgePathways;
	static void NewProp_bIsUpdatingAreaPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUpdatingAreaPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedNodeArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeon_AddArea, "AddArea" }, // 834203386
		{ &Z_Construct_UFunction_ADungeon_GetAllNodeAreas, "GetAllNodeAreas" }, // 1080568148
		{ &Z_Construct_UFunction_ADungeon_SetFocusedNodeArea, "SetFocusedNodeArea" }, // 1669927650
		{ &Z_Construct_UFunction_ADungeon_SetIsUpdatingAreaPosition, "SetIsUpdatingAreaPosition" }, // 1630052135
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
void Z_Construct_UClass_ADungeon_Statics::NewProp_bIsUpdatingAreaPosition_SetBit(void* Obj)
{
	((ADungeon*)Obj)->bIsUpdatingAreaPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_bIsUpdatingAreaPosition = { "bIsUpdatingAreaPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeon), &Z_Construct_UClass_ADungeon_Statics::NewProp_bIsUpdatingAreaPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUpdatingAreaPosition_MetaData), NewProp_bIsUpdatingAreaPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_FocusedNodeArea = { "FocusedNodeArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, FocusedNodeArea), Z_Construct_UClass_ANodeArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedNodeArea_MetaData), NewProp_FocusedNodeArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_CentrePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllNodeAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_AllEdgePathways,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_bIsUpdatingAreaPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_FocusedNodeArea,
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
struct Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 2577344204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_1912892137(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
