// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionPlugin/Public/InteractComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractComponent();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UInteractComponent::execServer_Interact)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactive);
		P_GET_OBJECT(AActor,Z_Param_InstigatorIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Interact_Validate(Z_Param_Interactive,Z_Param_InstigatorIn))
		{
			RPC_ValidateFailed(TEXT("Server_Interact_Validate"));
			return;
		}
		P_THIS->Server_Interact_Implementation(Z_Param_Interactive,Z_Param_InstigatorIn);
		P_NATIVE_END;
	}
	struct InteractComponent_eventServer_Interact_Parms
	{
		AActor* Interactive;
		AActor* InstigatorIn;
	};
	static FName NAME_UInteractComponent_Server_Interact = FName(TEXT("Server_Interact"));
	void UInteractComponent::Server_Interact(AActor* Interactive, AActor* InstigatorIn)
	{
		InteractComponent_eventServer_Interact_Parms Parms;
		Parms.Interactive=Interactive;
		Parms.InstigatorIn=InstigatorIn;
		ProcessEvent(FindFunctionChecked(NAME_UInteractComponent_Server_Interact),&Parms);
	}
	void UInteractComponent::StaticRegisterNativesUInteractComponent()
	{
		UClass* Class = UInteractComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_Interact", &UInteractComponent::execServer_Interact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::NewProp_Interactive = { "Interactive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractComponent_eventServer_Interact_Parms, Interactive), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::NewProp_InstigatorIn = { "InstigatorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractComponent_eventServer_Interact_Parms, InstigatorIn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::NewProp_Interactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::NewProp_InstigatorIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractComponent, nullptr, "Server_Interact", nullptr, nullptr, sizeof(InteractComponent_eventServer_Interact_Parms), Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractComponent_Server_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractComponent_Server_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractComponent);
	UClass* Z_Construct_UClass_UInteractComponent_NoRegister()
	{
		return UInteractComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractLineSweepDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractLineSweepDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMostRelevantActorByDistance_MetaData[];
#endif
		static void NewProp_bUseMostRelevantActorByDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMostRelevantActorByDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractComponent_Server_Interact, "Server_Interact" }, // 4212376514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractComponent.h" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineSweepDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineSweepDistance = { "InteractLineSweepDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractComponent, InteractLineSweepDistance), METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineSweepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineSweepDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Est-ce que l'on cherche l'Interactive le plus proche du joueur si aucun ne se trouve face \xc3\xa0 nous ?\n" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
		{ "ToolTip", "Est-ce que l'on cherche l'Interactive le plus proche du joueur si aucun ne se trouve face \xc3\xa0 nous ?" },
	};
#endif
	void Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance_SetBit(void* Obj)
	{
		((UInteractComponent*)Obj)->bUseMostRelevantActorByDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance = { "bUseMostRelevantActorByDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInteractComponent), &Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineSweepDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_bUseMostRelevantActorByDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractComponent_Statics::ClassParams = {
		&UInteractComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractComponent.OuterSingleton, Z_Construct_UClass_UInteractComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractComponent.OuterSingleton;
	}
	template<> INTERACTIONPLUGIN_API UClass* StaticClass<UInteractComponent>()
	{
		return UInteractComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractComponent);
	UInteractComponent::~UInteractComponent() {}
	struct Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractComponent, UInteractComponent::StaticClass, TEXT("UInteractComponent"), &Z_Registration_Info_UClass_UInteractComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractComponent), 965171657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractComponent_h_2293118677(TEXT("/Script/InteractionPlugin"),
		Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
