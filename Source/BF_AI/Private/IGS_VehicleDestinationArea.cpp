#include "IGS_VehicleDestinationArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_VehicleDestinationArea::AIGS_VehicleDestinationArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("GroupRootComponent"));
    auto gen2 = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaDefinition"));
    (*this).MaxSpawnsCount = -1;
    (*this).Cooldown.Min = 1.000000000e+00f;
    (*this).Cooldown.Max = 2.000000000e+00f;
    (*this).AllowTrespassers = true;
    (*this).GroupRootComponent = gen;
    (*this).AreaDefinition = gen2;
    (*this).IsActive = true;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

TArray<AIGS_VehicleBase*> AIGS_VehicleDestinationArea::TriggerSpecificPassengersCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount) {
    return {};
}

TArray<AIGS_VehicleBase*> AIGS_VehicleDestinationArea::TriggerCarArrivalBase(EIGS_VehicleSpawnGroup inVehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount, int32 minPassengers, int32 maxPassengers) {
    return {};
}

TArray<AIGS_VehicleBase*> AIGS_VehicleDestinationArea::TriggerCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, int32 vehicleCount, int32 minPassengers, int32 maxPassengers) {
    return {};
}

void AIGS_VehicleDestinationArea::OnShowParkingAreasChanged(bool inOn) {
}

