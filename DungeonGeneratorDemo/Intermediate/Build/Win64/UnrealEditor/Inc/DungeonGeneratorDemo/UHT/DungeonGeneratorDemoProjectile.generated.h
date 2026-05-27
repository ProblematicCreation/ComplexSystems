// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGeneratorDemoProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUNGEONGENERATORDEMO_DungeonGeneratorDemoProjectile_generated_h
#error "DungeonGeneratorDemoProjectile.generated.h already included, missing '#pragma once' in DungeonGeneratorDemoProjectile.h"
#endif
#define DUNGEONGENERATORDEMO_DungeonGeneratorDemoProjectile_generated_h

#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGeneratorDemoProjectile(); \
	friend struct Z_Construct_UClass_ADungeonGeneratorDemoProjectile_Statics; \
public: \
	DECLARE_CLASS(ADungeonGeneratorDemoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGeneratorDemo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGeneratorDemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonGeneratorDemoProjectile(ADungeonGeneratorDemoProjectile&&); \
	ADungeonGeneratorDemoProjectile(const ADungeonGeneratorDemoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGeneratorDemoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGeneratorDemoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGeneratorDemoProjectile) \
	NO_API virtual ~ADungeonGeneratorDemoProjectile();


#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_12_PROLOG
#define FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONGENERATORDEMO_API UClass* StaticClass<class ADungeonGeneratorDemoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_AIE_git_ComplexSystems_DungeonGeneratorDemo_Source_DungeonGeneratorDemo_DungeonGeneratorDemoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
