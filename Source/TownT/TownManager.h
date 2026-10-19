// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCameraPawn.h"
#include "BuildingManager.h"
#include "TownManager.generated.h"

UCLASS()
class TOWNT_API ATownManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATownManager();

protected:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	ABuildingManager* buildingManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	APlayerCameraPawn* playerCamera;
};
