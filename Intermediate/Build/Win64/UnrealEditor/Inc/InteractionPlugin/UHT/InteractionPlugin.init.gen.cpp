// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InteractionPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InteractionPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_InteractionPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InteractionPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEB507E68,
				0xC9CF541C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InteractionPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InteractionPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InteractionPlugin(Z_Construct_UPackage__Script_InteractionPlugin, TEXT("/Script/InteractionPlugin"), Z_Registration_Info_UPackage__Script_InteractionPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEB507E68, 0xC9CF541C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
