// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactive.h"
#include "Components/ActorComponent.h"
#include "InteractComponent.generated.h"

DECLARE_DELEGATE_RetVal_TwoParams(bool, FInteractiveLineSweepDelegate, float /*Distance*/, TArray<FHitResult>& /*Out Result*/);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent)) 
class INTERACTIONPLUGIN_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteractComponent();

	void Interact();

	void AddInteractive(IInteractive* Interactive);
	void RemoveInteractive(IInteractive* Interactive);

	void SetInteractionLineSweepDelegate(FInteractiveLineSweepDelegate Delegate){LineSweepDelegate = Delegate;}
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	TArray<IInteractive*> PossibleInteractive;
	FInteractiveLineSweepDelegate LineSweepDelegate;
	
	IInteractive* MostRelevantActor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Interaction")
	float InteractLineSweepDistance;

	// Est-ce que l'on cherche l'Interactive le plus proche du joueur si aucun ne se trouve face à nous ?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Interaction")
	bool bUseMostRelevantActorByDistance;

	void RecomputeInteractiveRelevancy();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Interact(AActor* Interactive, AActor* InstigatorIn);
};
