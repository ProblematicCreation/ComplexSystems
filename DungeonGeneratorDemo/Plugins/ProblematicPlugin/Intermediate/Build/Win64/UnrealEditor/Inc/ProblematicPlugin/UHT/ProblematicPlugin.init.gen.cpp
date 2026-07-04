// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProblematicPlugin_init() {}
	PROBLEMATICPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCollected__DelegateSignature();
	PROBLEMATICPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProblematicPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProblematicPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ProblematicPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCollected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProblematicPlugin_OnObjectiveCompleted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProblematicPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4599284F,
				0xE294C954,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProblematicPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProblematicPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProblematicPlugin(Z_Construct_UPackage__Script_ProblematicPlugin, TEXT("/Script/ProblematicPlugin"), Z_Registration_Info_UPackage__Script_ProblematicPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4599284F, 0xE294C954));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
