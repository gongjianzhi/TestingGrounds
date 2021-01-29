// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "GrassComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTINGGROUNDS_API UGrassComponent : public UHierarchicalInstancedStaticMeshComponent
{
	GENERATED_BODY()

public:
	UGrassComponent();

	UPROPERTY(EditDefaultsOnly, Category = Spawning)
	FBox SpawningExtents = FBox(FVector(0, -2000, 0), FVector(4000, 2000, 0));

	UPROPERTY(EditDefaultsOnly, Category = Spawning)
	int32 SpawnCount;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void SpawnGrass();
	
};
