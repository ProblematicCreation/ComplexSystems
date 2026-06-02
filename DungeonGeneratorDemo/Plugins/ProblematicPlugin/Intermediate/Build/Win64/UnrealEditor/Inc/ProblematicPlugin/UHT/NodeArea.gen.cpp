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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea();
PROBLEMATICPLUGIN_API UClass* Z_Construct_UClass_ANodeArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProblematicPlugin();
// End Cross Module References

// Begin Class ANodeArea Function Get2DLocation
struct Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics
{
	struct NodeArea_eventGet2DLocation_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NodeArea_eventGet2DLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANodeArea, nullptr, "Get2DLocation", nullptr, nullptr, Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::NodeArea_eventGet2DLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::NodeArea_eventGet2DLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANodeArea_Get2DLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANodeArea_Get2DLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANodeArea::execGet2DLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->Get2DLocation();
	P_NATIVE_END;
}
// End Class ANodeArea Function Get2DLocation

// Begin Class ANodeArea Function GetInnerPerimeter
struct Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics
{
	struct NodeArea_eventGetInnerPerimeter_Parms
	{
		FBox2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NodeArea_eventGetInnerPerimeter_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANodeArea, nullptr, "GetInnerPerimeter", nullptr, nullptr, Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::NodeArea_eventGetInnerPerimeter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::NodeArea_eventGetInnerPerimeter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANodeArea_GetInnerPerimeter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANodeArea_GetInnerPerimeter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANodeArea::execGetInnerPerimeter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox2D*)Z_Param__Result=P_THIS->GetInnerPerimeter();
	P_NATIVE_END;
}
// End Class ANodeArea Function GetInnerPerimeter

// Begin Class ANodeArea Function GetOuterPerimeter
struct Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics
{
	struct NodeArea_eventGetOuterPerimeter_Parms
	{
		FBox2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NodeArea_eventGetOuterPerimeter_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANodeArea, nullptr, "GetOuterPerimeter", nullptr, nullptr, Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::NodeArea_eventGetOuterPerimeter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::NodeArea_eventGetOuterPerimeter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANodeArea_GetOuterPerimeter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANodeArea_GetOuterPerimeter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANodeArea::execGetOuterPerimeter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox2D*)Z_Param__Result=P_THIS->GetOuterPerimeter();
	P_NATIVE_END;
}
// End Class ANodeArea Function GetOuterPerimeter

// Begin Class ANodeArea Function SetInnerAndOuterPerimeter
struct Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics
{
	struct NodeArea_eventSetInnerAndOuterPerimeter_Parms
	{
		FBox2D Inner;
		FBox2D Outer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::NewProp_Inner = { "Inner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NodeArea_eventSetInnerAndOuterPerimeter_Parms, Inner), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NodeArea_eventSetInnerAndOuterPerimeter_Parms, Outer), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::NewProp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::NewProp_Outer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANodeArea, nullptr, "SetInnerAndOuterPerimeter", nullptr, nullptr, Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::NodeArea_eventSetInnerAndOuterPerimeter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::NodeArea_eventSetInnerAndOuterPerimeter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANodeArea::execSetInnerAndOuterPerimeter)
{
	P_GET_STRUCT(FBox2D,Z_Param_Inner);
	P_GET_STRUCT(FBox2D,Z_Param_Outer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInnerAndOuterPerimeter(Z_Param_Inner,Z_Param_Outer);
	P_NATIVE_END;
}
// End Class ANodeArea Function SetInnerAndOuterPerimeter

// Begin Class ANodeArea
void ANodeArea::StaticRegisterNativesANodeArea()
{
	UClass* Class = ANodeArea::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get2DLocation", &ANodeArea::execGet2DLocation },
		{ "GetInnerPerimeter", &ANodeArea::execGetInnerPerimeter },
		{ "GetOuterPerimeter", &ANodeArea::execGetOuterPerimeter },
		{ "SetInnerAndOuterPerimeter", &ANodeArea::execSetInnerAndOuterPerimeter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "NodeArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NodeArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANodeArea_Get2DLocation, "Get2DLocation" }, // 1169770991
		{ &Z_Construct_UFunction_ANodeArea_GetInnerPerimeter, "GetInnerPerimeter" }, // 3235842311
		{ &Z_Construct_UFunction_ANodeArea_GetOuterPerimeter, "GetOuterPerimeter" }, // 2072637034
		{ &Z_Construct_UFunction_ANodeArea_SetInnerAndOuterPerimeter, "SetInnerAndOuterPerimeter" }, // 2158726405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANodeArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeArea_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANodeArea, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANodeArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeArea_Statics::NewProp_CollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANodeArea_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ANodeArea_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANodeArea_Statics::PropPointers),
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
		{ Z_Construct_UClass_ANodeArea, ANodeArea::StaticClass, TEXT("ANodeArea"), &Z_Registration_Info_UClass_ANodeArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANodeArea), 1307191801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_3470997861(TEXT("/Script/ProblematicPlugin"),
	Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_NodeArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
