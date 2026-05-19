// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProblematicPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProblematicPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProblematicPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ProblematicPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProblematicPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x12BD7D96,
				0x621AEF3F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProblematicPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProblematicPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProblematicPlugin(Z_Construct_UPackage__Script_ProblematicPlugin, TEXT("/Script/ProblematicPlugin"), Z_Registration_Info_UPackage__Script_ProblematicPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x12BD7D96, 0x621AEF3F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
