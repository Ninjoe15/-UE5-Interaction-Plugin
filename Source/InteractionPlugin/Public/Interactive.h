// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactive.generated.h"

// This class does not need to be modified.
UINTERFACE()
class INTERACTIONPLUGIN_API UInteractive : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INTERACTIONPLUGIN_API IInteractive
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Interact(AActor* InstigatorIn) = 0;
	virtual bool CanBeInteracted(AActor* InstigatorIn) = 0;
	virtual FVector GetInteractiveLocation() const = 0;
	virtual AActor* GetInteractiveOwner() const = 0;
	
};
