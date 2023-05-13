// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionPlugin/Public/InteractiveActor.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_AInteractiveActor();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_AInteractiveActor_NoRegister();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
	INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractive_NoRegister();
	INTERACTIONPLUGIN_API UEnum* Z_Construct_UEnum_InteractionPlugin_EInteractiveState();
	UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractiveState;
	static UEnum* EInteractiveState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractiveState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractiveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractionPlugin_EInteractiveState, Z_Construct_UPackage__Script_InteractionPlugin(), TEXT("EInteractiveState"));
		}
		return Z_Registration_Info_UEnum_EInteractiveState.OuterSingleton;
	}
	template<> INTERACTIONPLUGIN_API UEnum* StaticEnum<EInteractiveState>()
	{
		return EInteractiveState_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::Enumerators[] = {
		{ "EInteractiveState::NotReady", (int64)EInteractiveState::NotReady },
		{ "EInteractiveState::Ready", (int64)EInteractiveState::Ready },
		{ "EInteractiveState::Interacted", (int64)EInteractiveState::Interacted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::Enum_MetaDataParams[] = {
		{ "Interacted.Name", "EInteractiveState::Interacted" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
		{ "NotReady.Name", "EInteractiveState::NotReady" },
		{ "Ready.Name", "EInteractiveState::Ready" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractionPlugin,
		nullptr,
		"EInteractiveState",
		"EInteractiveState",
		Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractionPlugin_EInteractiveState()
	{
		if (!Z_Registration_Info_UEnum_EInteractiveState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractiveState.InnerSingleton, Z_Construct_UEnum_InteractionPlugin_EInteractiveState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractiveState.InnerSingleton;
	}
	DEFINE_FUNCTION(AInteractiveActor::execHandleTriggerEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTriggerEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractiveActor::execHandleTriggerBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractiveActor::execOnRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State();
		P_NATIVE_END;
	}
	struct InteractiveActor_eventBP_DoInteract_Parms
	{
		AActor* InstigatorIn;
	};
	static FName NAME_AInteractiveActor_BP_DoInteract = FName(TEXT("BP_DoInteract"));
	void AInteractiveActor::BP_DoInteract(AActor* InstigatorIn)
	{
		InteractiveActor_eventBP_DoInteract_Parms Parms;
		Parms.InstigatorIn=InstigatorIn;
		ProcessEvent(FindFunctionChecked(NAME_AInteractiveActor_BP_DoInteract),&Parms);
	}
	void AInteractiveActor::StaticRegisterNativesAInteractiveActor()
	{
		UClass* Class = AInteractiveActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTriggerBeginOverlap", &AInteractiveActor::execHandleTriggerBeginOverlap },
			{ "HandleTriggerEndOverlap", &AInteractiveActor::execHandleTriggerEndOverlap },
			{ "OnRep_State", &AInteractiveActor::execOnRep_State },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::NewProp_InstigatorIn = { "InstigatorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventBP_DoInteract_Parms, InstigatorIn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::NewProp_InstigatorIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "BP_DoInteract", nullptr, nullptr, sizeof(InteractiveActor_eventBP_DoInteract_Parms), Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractiveActor_BP_DoInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_BP_DoInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics
	{
		struct InteractiveActor_eventHandleTriggerBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InteractiveActor_eventHandleTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InteractiveActor_eventHandleTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "HandleTriggerBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::InteractiveActor_eventHandleTriggerBeginOverlap_Parms), Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics
	{
		struct InteractiveActor_eventHandleTriggerEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveActor_eventHandleTriggerEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "HandleTriggerEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::InteractiveActor_eventHandleTriggerEndOverlap_Parms), Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractiveActor_OnRep_State_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveActor_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveActor_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveActor, nullptr, "OnRep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveActor_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveActor_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractiveActor_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveActor_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractiveActor);
	UClass* Z_Construct_UClass_AInteractiveActor_NoRegister()
	{
		return AInteractiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PossibleInteractors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossibleInteractors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PossibleInteractors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractiveActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractiveActor_BP_DoInteract, "BP_DoInteract" }, // 2561410526
		{ &Z_Construct_UFunction_AInteractiveActor_HandleTriggerBeginOverlap, "HandleTriggerBeginOverlap" }, // 1231674273
		{ &Z_Construct_UFunction_AInteractiveActor_HandleTriggerEndOverlap, "HandleTriggerEndOverlap" }, // 3129087462
		{ &Z_Construct_UFunction_AInteractiveActor_OnRep_State, "OnRep_State" }, // 3728866680
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractiveActor.h" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveActor_Statics::NewProp_TriggerComp_MetaData[] = {
		{ "Category", "InteractiveActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_TriggerComp = { "TriggerComp", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveActor, TriggerComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractiveActor_Statics::NewProp_TriggerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::NewProp_TriggerComp_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State_MetaData[] = {
		{ "Category", "InteractiveActor" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveActor, State), Z_Construct_UEnum_InteractionPlugin_EInteractiveState, METADATA_PARAMS(Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State_MetaData)) }; // 2286353668
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors_Inner = { "PossibleInteractors", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors = { "PossibleInteractors", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveActor, PossibleInteractors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_TriggerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActor_Statics::NewProp_PossibleInteractors,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractiveActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractive_NoRegister, (int32)VTABLE_OFFSET(AInteractiveActor, IInteractive), false },  // 1556392289
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveActor_Statics::ClassParams = {
		&AInteractiveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractiveActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractiveActor()
	{
		if (!Z_Registration_Info_UClass_AInteractiveActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractiveActor.OuterSingleton, Z_Construct_UClass_AInteractiveActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractiveActor.OuterSingleton;
	}
	template<> INTERACTIONPLUGIN_API UClass* StaticClass<AInteractiveActor>()
	{
		return AInteractiveActor::StaticClass();
	}

	void AInteractiveActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AInteractiveActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveActor);
	AInteractiveActor::~AInteractiveActor() {}
	struct Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics::EnumInfo[] = {
		{ EInteractiveState_StaticEnum, TEXT("EInteractiveState"), &Z_Registration_Info_UEnum_EInteractiveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2286353668U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractiveActor, AInteractiveActor::StaticClass, TEXT("AInteractiveActor"), &Z_Registration_Info_UClass_AInteractiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractiveActor), 2248050512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_2534364429(TEXT("/Script/InteractionPlugin"),
		Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
