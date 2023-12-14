// Fill out your copyright notice in the Description page of Project Settings.


#include "MovePlatform.h"

// Sets default values
AMovePlatform::AMovePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovePlatform::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMovePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Move platform forward
		//Get current location
	FVector CurrentLocation = GetActorLocation();
	
		//Add vector to said location
	CurrentLocation.X = CurrentLocation.X + 3;

		//Set the location
	SetActorLocation(CurrentLocation);

	//Send platform back if gone too far
		//Check how far platform has moved
		//Reverse direction if it has gne too far

}

