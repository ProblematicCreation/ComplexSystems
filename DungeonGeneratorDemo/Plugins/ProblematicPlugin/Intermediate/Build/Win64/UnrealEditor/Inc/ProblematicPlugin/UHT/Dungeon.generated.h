// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dungeon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANodeArea;
#ifdef PROBLEMATICPLUGIN_Dungeon_generated_h
#error "Dungeon.generated.h already included, missing '#pragma once' in Dungeon.h"
#endif
#define PROBLEMATICPLUGIN_Dungeon_generated_h

#define FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddArea);


#define FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeon(); \
	friend struct Z_Construct_UClass_ADungeon_Statics; \
public: \
	DECLARE_CLASS(ADungeon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProblematicPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADungeon)


#define FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeon(ADungeon&&); \
	ADungeon(const ADungeon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeon) \
	NO_API virtual ~ADungeon();


#define FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_12_PROLOG
#define FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROBLEMATICPLUGIN_API UClass* StaticClass<class ADungeon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_s241270_Documents_GitHub_ComplexSystems_DungeonGeneratorDemo_Plugins_ProblematicPlugin_Source_ProblematicPlugin_Public_Dungeon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
