// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractComponent.h"
#include "Interactive.h"
#include "GameFramework/Actor.h"
#include "InteractiveActor.generated.h"

UENUM()
enum class EInteractiveState : uint8
{
	NotReady,
	Ready,
	Interacted
};

UCLASS(Abstract)
class INTERACTIONPLUGIN_API AInteractiveActor : public AActor, public IInteractive
{



private:
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractiveActor();
	virtual void PostInitializeComponents() override;
	
	virtual void Interact(AActor* InstigatorIn) override;
	virtual bool CanBeInteracted(AActor* InstigatorIn) override;
	virtual FVector GetInteractiveLocation() const override {return GetTransform().GetLocation();}
	virtual AActor* GetInteractiveOwner() const override {return Cast<AActor>(_getUObject());}
	
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USphereComponent* TriggerComp;
	
	
	virtual void DoInteract(AActor* InstigatorIn);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_DoInteract(AActor* InstigatorIn);

	UPROPERTY(ReplicatedUsing=OnRep_State, BlueprintReadOnly)
	EInteractiveState State;
	
	UFUNCTION()
	void OnRep_State();

	UFUNCTION()
	void HandleTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void HandleTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY()
	TArray<UInteractComponent*> PossibleInteractors;
};
