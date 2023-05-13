// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractiveActor.h"

#include "InteractComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AInteractiveActor::AInteractiveActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	State = EInteractiveState::Ready;
	
	TriggerComp = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	TriggerComp->SetCollisionProfileName(TEXT("Trigger"));
	RootComponent = TriggerComp;
	bReplicates = true;
}


void AInteractiveActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	TriggerComp->OnComponentBeginOverlap.AddDynamic(this, &AInteractiveActor::HandleTriggerBeginOverlap);
	TriggerComp->OnComponentEndOverlap.AddDynamic(this, &AInteractiveActor::HandleTriggerEndOverlap);
}

void AInteractiveActor::Interact(AActor* InstigatorIn)
{
	State = EInteractiveState::Interacted;
	OnRep_State();
	DoInteract(InstigatorIn);
	BP_DoInteract(InstigatorIn);
}

bool AInteractiveActor::CanBeInteracted(AActor* InstigatorIn)
{
	return State == EInteractiveState::Ready;
}

void AInteractiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AInteractiveActor, State);
}

// Called when the game starts or when spawned
void AInteractiveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractiveActor::DoInteract(AActor* InstigatorIn)
{
}

void AInteractiveActor::OnRep_State()
{
	//VFX

	if(State == EInteractiveState::Interacted)
	{
		for(auto& Interactor : PossibleInteractors)
		{
			Interactor->RemoveInteractive(this);
		}
	}
}

void AInteractiveActor::HandleTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(!OtherActor) return;
	auto* InteractionComp = Cast<UInteractComponent>(OtherActor->GetComponentByClass(UInteractComponent::StaticClass()));
	if(!InteractionComp) return;
	PossibleInteractors.Add(InteractionComp);
	InteractionComp->AddInteractive(this);
}

void AInteractiveActor::HandleTriggerEndOverlap( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(!OtherActor) return;
	auto* InteractionComp = Cast<UInteractComponent>(OtherActor->GetComponentByClass(UInteractComponent::StaticClass()));
	if(!InteractionComp) return;
	PossibleInteractors.Remove(InteractionComp);
	InteractionComp->RemoveInteractive(this);
}

