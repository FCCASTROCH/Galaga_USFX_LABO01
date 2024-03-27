// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteActor.h"
#include "Capsula.h"
#include "ComponenteActor.h"
#include "Containers/Queue.h"

UComponenteActor::UComponenteActor()
{
    PrimaryComponentTick.bCanEverTick = true;
}

int32 UComponenteActor::AddToInventory(ACapsula* AxtorAdd)
{
    //return CurrentInventory.Add(AxtorAdd);
    return CurrentInventory.Enqueue(AxtorAdd);
}

void UComponenteActor::RemoveFromInventory(ACapsula* ActorToRemove)
{
    //   CurrentInventory.Remove(ActorToRemove);
    CurrentInventory.Dequeue(ActorToRemove);
}

void UComponenteActor::BeginPlay()
{
    Super::BeginPlay();
}

void UComponenteActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
