// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "BuildingActor.generated.h"

UCLASS()
class TOWNT_API ABuildingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	int TargetNum = 600.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// get camera by childBP
	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Camera")
	UCameraComponent* GetMyCamera() const;
};
