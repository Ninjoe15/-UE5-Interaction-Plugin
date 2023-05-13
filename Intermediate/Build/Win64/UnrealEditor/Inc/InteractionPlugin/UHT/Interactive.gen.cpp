// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionPlugin/Public/Interactive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractive() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractive();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractive_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// End Cross Module References
	void UInteractive::StaticRegisterNativesUInteractive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractive);
	UClass* Z_Construct_UClass_UInteractive_NoRegister()
	{
		return UInteractive::StaticClass();
	}
	struct Z_Construct_UClass_UInteractive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractive_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractive_Statics::ClassParams = {
		&UInteractive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractive()
	{
		if (!Z_Registration_Info_UClass_UInteractive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractive.OuterSingleton, Z_Construct_UClass_UInteractive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractive.OuterSingleton;
	}
	template<> INTERACTIONPLUGIN_API UClass* StaticClass<UInteractive>()
	{
		return UInteractive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractive);
	UInteractive::~UInteractive() {}
	struct Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_Interactive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_Interactive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractive, UInteractive::StaticClass, TEXT("UInteractive"), &Z_Registration_Info_UClass_UInteractive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractive), 1556392289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_Interactive_h_3163994782(TEXT("/Script/InteractionPlugin"),
		Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_Interactive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_Interactive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
