// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INTERACTIONPLUGIN_InteractiveActor_generated_h
#error "InteractiveActor.generated.h already included, missing '#pragma once' in InteractiveActor.h"
#endif
#define INTERACTIONPLUGIN_InteractiveActor_generated_h

#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_SPARSE_DATA
#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTriggerEndOverlap); \
	DECLARE_FUNCTION(execHandleTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_State);


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTriggerEndOverlap); \
	DECLARE_FUNCTION(execHandleTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_State);


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_ACCESSORS
#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_CALLBACK_WRAPPERS
#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveActor(); \
	friend struct Z_Construct_UClass_AInteractiveActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractiveActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAInteractiveActor(); \
	friend struct Z_Construct_UClass_AInteractiveActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractiveActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractiveActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractiveActor(AInteractiveActor&&); \
	NO_API AInteractiveActor(const AInteractiveActor&); \
public: \
	NO_API virtual ~AInteractiveActor();


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractiveActor(AInteractiveActor&&); \
	NO_API AInteractiveActor(const AInteractiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInteractiveActor) \
	NO_API virtual ~AInteractiveActor();


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_19_PROLOG
#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_SPARSE_DATA \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_RPC_WRAPPERS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_ACCESSORS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_CALLBACK_WRAPPERS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_INCLASS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_SPARSE_DATA \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_ACCESSORS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_CALLBACK_WRAPPERS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONPLUGIN_API UClass* StaticClass<class AInteractiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeathRunDev_Project8INF916_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractiveActor_h


#define FOREACH_ENUM_EINTERACTIVESTATE(op) \
	op(EInteractiveState::NotReady) \
	op(EInteractiveState::Ready) \
	op(EInteractiveState::Interacted) 

enum class EInteractiveState : uint8;
template<> struct TIsUEnumClass<EInteractiveState> { enum { Value = true }; };
template<> INTERACTIONPLUGIN_API UEnum* StaticEnum<EInteractiveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
