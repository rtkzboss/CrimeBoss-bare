#include "IGS_VehicleSpawner.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

AIGS_VehicleSpawner::AIGS_VehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).ForceVehicleSpawn = FSoftObjectPath();
    (*this).MaxSpawnsCount = -1;
    (*this).bEnabled = true;
    (*this).RootComponent = gen;
}

AIGS_VehicleBase* AIGS_VehicleSpawner::SpawnVehicleOnPath(TSoftClassPtr<AIGS_VehicleBase> invehicleToSpawn, TArray<UIGS_TrafficPathComponent*> InPath) {
    return nullptr;
}

TArray<AIGS_VehicleBase*> AIGS_VehicleSpawner::SpawnSpecific(TSubclassOf<UIGS_VehicleObject> inSpecificVehicle, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers) {
    return {};
}

TArray<AIGS_VehicleBase*> AIGS_VehicleSpawner::Spawn(EIGS_VehicleSpawnGroup inVehicleGroup, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers) {
    return {};
}

TArray<AIGS_VehicleBase*> AIGS_VehicleSpawner::GetSpawnedVehicles() const {
    return {};
}

void AIGS_VehicleSpawner::Enable() {
}

void AIGS_VehicleSpawner::Disable() {
}


