#include "IGS_VehicleSpawnPoint.h"
#include "Components/SceneComponent.h"

AIGS_VehicleSpawnPoint::AIGS_VehicleSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).ChanceToGenerate = 1.000000000e+02f;
    (*this).bSpawnOnBeginPlay = true;
    (*this).RootComponent = gen;
}

void AIGS_VehicleSpawnPoint::Server_Spawn() {
}

void AIGS_VehicleSpawnPoint::Server_RemoveVehicle() const {
}

void AIGS_VehicleSpawnPoint::OnDebugSubsystemUpdated() {
}

