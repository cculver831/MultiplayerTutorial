// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSObjectiveActor.h"


// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned //Start function in Unity
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame //Like the update funciton in unity
void AFPSObjectiveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

