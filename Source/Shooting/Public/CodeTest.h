// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeTest.generated.h"

UCLASS()
class SHOOTING_API ACodeTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACodeTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override; 

public:
	//TMap맵 자료구조 <FString, float> 키 벨류 distances 만들기.
	UPROPERTY(EditAnywhere)
	TMap<FString, float> distances;

	int32 Add(int32  &num1, int32  &num2);
};
