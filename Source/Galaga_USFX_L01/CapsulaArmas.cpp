// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArmas.h"
#include "Uobject/ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"
ACapsulaArmas::ACapsulaArmas()
{
    PrimaryActorTick.bCanEverTick = true;

    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

    if (MeshAsset.Object != nullptr)
    {
        GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
        GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
    }

    GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);

    SetActorEnableCollision(true);
    ZLimiteDestruccion = 180.0f;
}

void ACapsulaArmas::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}

void ACapsulaArmas::PickUp()
{

    SetActorTickEnabled(false);
    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);
}

void ACapsulaArmas::PutDown(FTransform TargetLocation)
{
    SetActorTickEnabled(true);
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);
    SetActorLocation(TargetLocation.GetLocation());
}

void ACapsulaArmas::Mover(float DeltaTime)
{
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Define la velocidad de movimiento vertical hacia abajo
    float VelocidadZ = -40.0f; // Ajusta según sea necesario

    // Calcula el desplazamiento en la dirección vertical hacia abajo
    float DesplazamientoZ = VelocidadZ * DeltaTime;

    // Calcula la nueva posición sumando el desplazamiento a la coordenada Z actual
    float NuevaPosicionZ = PosicionActual.Z + DesplazamientoZ;

    // Establece la nueva posición del actor
    SetActorLocation(FVector(PosicionActual.X, PosicionActual.Y, NuevaPosicionZ));
    SetActorLocation(FVector(PosicionActual.X, PosicionActual.Y, NuevaPosicionZ));
    if (GetActorLocation().Z < ZLimiteDestruccion)
    {

        Destroy();
    }

}

