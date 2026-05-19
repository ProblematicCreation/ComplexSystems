// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProblematicFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEdgePathway;
class ANodeArea;
class UWorld;
#ifdef PROBLEMATICPLUGIN_ProblematicFunctions_generated_h
#error "ProblematicFunctions.generated.h already included, missing '#pragma once' in ProblematicFunctions.h"
#endif
#define PROBLEMATICPLUGIN_ProblematicFunctions_generated_h

#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateDungeonAndLoadLevel); \
	DECLARE_FUNCTION(execGenerateDungeonMap);


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProblematicFunctions(); \
	friend struct Z_Construct_UClass_UProblematicFunctions_Statics; \
public: \
	DECLARE_CLASS(UProblematicFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProblematicPlugin"), NO_API) \
	DECLARE_SERIALIZER(UProblematicFunctions)


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProblematicFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProblematicFunctions(UProblematicFunctions&&); \
	UProblematicFunctions(const UProblematicFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProblematicFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProblematicFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProblematicFunctions) \
	NO_API virtual ~UProblematicFunctions();


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_15_PROLOG
#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROBLEMATICPLUGIN_API UClass* StaticClass<class UProblematicFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_ProblematicFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
