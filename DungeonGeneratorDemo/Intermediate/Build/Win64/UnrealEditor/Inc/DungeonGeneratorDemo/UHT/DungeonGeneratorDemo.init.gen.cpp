// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGeneratorDemo_init() {}
	DUNGEONGENERATORDEMO_API UFunction* Z_Construct_UDelegateFunction_DungeonGeneratorDemo_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonGeneratorDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonGeneratorDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonGeneratorDemo.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonGeneratorDemo_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonGeneratorDemo",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF8B64B38,
				0x0CBF26B8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonGeneratorDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonGeneratorDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonGeneratorDemo(Z_Construct_UPackage__Script_DungeonGeneratorDemo, TEXT("/Script/DungeonGeneratorDemo"), Z_Registration_Info_UPackage__Script_DungeonGeneratorDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF8B64B38, 0x0CBF26B8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
