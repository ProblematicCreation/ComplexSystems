// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealC++Classes/ProblematicGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UUserWidget;
struct FCachedData;
struct FStoredAreaAndFrequency;
#ifdef PROBLEMATICPLUGIN_ProblematicGameInstance_generated_h
#error "ProblematicGameInstance.generated.h already included, missing '#pragma once' in ProblematicGameInstance.h"
#endif
#define PROBLEMATICPLUGIN_ProblematicGameInstance_generated_h

#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStoredAreaAndFrequency_Statics; \
	PROBLEMATICPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROBLEMATICPLUGIN_API UScriptStruct* StaticStruct<struct FStoredAreaAndFrequency>();

#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedData_Statics; \
	PROBLEMATICPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROBLEMATICPLUGIN_API UScriptStruct* StaticStruct<struct FCachedData>();

#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldGenerateDungeonOnBeginBeginPlay); \
	DECLARE_FUNCTION(execResetDungeonGenerationData); \
	DECLARE_FUNCTION(execGetCachedDungeonData); \
	DECLARE_FUNCTION(execCachedDungeonToGenerate);


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProblematicGameInstance(); \
	friend struct Z_Construct_UClass_UProblematicGameInstance_Statics; \
public: \
	DECLARE_CLASS(UProblematicGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProblematicPlugin"), NO_API) \
	DECLARE_SERIALIZER(UProblematicGameInstance)


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProblematicGameInstance(UProblematicGameInstance&&); \
	UProblematicGameInstance(const UProblematicGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProblematicGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProblematicGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProblematicGameInstance) \
	NO_API virtual ~UProblematicGameInstance();


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_51_PROLOG
#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROBLEMATICPLUGIN_API UClass* StaticClass<class UProblematicGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_UnrealC__Classes_ProblematicGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
