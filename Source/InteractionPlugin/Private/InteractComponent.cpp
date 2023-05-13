// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractComponent.h"


// Sets default values for this component's properties
UInteractComponent::UInteractComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	
	InteractLineSweepDistance = 100.f;
	bUseMostRelevantActorByDistance = false;
	// ...
}

void UInteractComponent::Interact()
{
	RecomputeInteractiveRelevancy(); 
	if(!MostRelevantActor) return;

	if(!MostRelevantActor->GetInteractiveOwner()->HasAuthority())
	{
		Server_Interact(MostRelevantActor->GetInteractiveOwner(), GetOwner());
		return;
	}
	
	MostRelevantActor->Interact(GetOwner());
}

void UInteractComponent::AddInteractive(IInteractive* Interactive)
{
	if(!Interactive) return;
	if(!GetOwner()) return;
	if(!Interactive->CanBeInteracted(GetOwner())) return;
	if(PossibleInteractive.Contains(Interactive)) return;
	PossibleInteractive.Add(Interactive);
}

void UInteractComponent::RemoveInteractive(IInteractive* Interactive)
{
	if(!Interactive) return;
	PossibleInteractive.Remove(Interactive);
	if(Interactive == MostRelevantActor) MostRelevantActor = nullptr;
}

// Called when the game starts
void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UInteractComponent::RecomputeInteractiveRelevancy()
{
	MostRelevantActor = nullptr;
	TArray<FHitResult> Results;
	if(!ensureMsgf(LineSweepDelegate.IsBound(), TEXT("Delegate was not bound"))) return;

	if(LineSweepDelegate.Execute(InteractLineSweepDistance, Results))
	{
		for(const auto& Result : Results)
		{
			if(!Result.GetActor()) continue;
			if(!Result.GetActor()->Implements<UInteractive>()) break;
			const auto& Interactive = Cast<IInteractive>(Result.GetActor());
			for(const auto& Relevant : PossibleInteractive)
			{
				if(Relevant->GetInteractiveOwner() == Result.GetActor())
				{
					MostRelevantActor = Interactive;
					return;
				}
			}

		}
	}

	// Si l'on ne veut pas interragir avec des InteractiveActor que l'on ne regarde pas
	if(!bUseMostRelevantActorByDistance) return;
	
	PossibleInteractive.Sort([&](const IInteractive& A, const IInteractive& B)
	{
		return FVector::DistSquared(A.GetInteractiveLocation(), GetOwner()->GetTransform().GetLocation()) <
			FVector::DistSquared(B.GetInteractiveLocation(), GetOwner()->GetTransform().GetLocation());
	});

	if(PossibleInteractive.IsEmpty()) return;
	MostRelevantActor = PossibleInteractive[0];
}

void UInteractComponent::Server_Interact_Implementation(AActor* Interactive, AActor* InstigatorIn)
{
	auto* Int = Cast<IInteractive>(Interactive);
	if(!Int) return;
	Int->Interact(InstigatorIn);
}

bool UInteractComponent::Server_Interact_Validate(AActor* Interactive, AActor* InstigatorIn)
{
	return true;
}


