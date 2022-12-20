// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeTest.h"

#pragma warning (disable: 4458) //C4456 경고를 무시한다.

// Sets default values
ACodeTest::ACodeTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodeTest::BeginPlay()
{
	Super::BeginPlay();

	//distances.Add("Seoul", 250.5f);
	//distances.Add("Incheon", 490.5f);
	//distances.Add("SungNam", 135.5f);
	//FString MyKey = "Incheon";

	//UE_LOG(LogTemp, Warning, TEXT("%s : %f"), *MyKey, distances[MyKey])

	int32 aa = 10;
	int32 bb = 15;
	int32 result;
	result = Add(aa, bb);

}

// Called every frame
void ACodeTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACodeTest::Add(int32  &num1, int32  &num2)
{
	num1++;
	num2++;
	return num1 + num2;
}
