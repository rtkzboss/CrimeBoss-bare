#include "IGS_VehicleGenerator.h"
#include "Components/SceneComponent.h"

AIGS_VehicleGenerator::AIGS_VehicleGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).SpawnFrequencyMinRangeInSeconds = 1.000000000e+01f;
    (*this).SpawnFrequencyMaxRangeInSeconds = 1.000000000e+01f;
    (*this).CarMaxSpeedMaxRangeValue = 6.000000000e+02f;
    (*this).CarMaxSpeedMinRangeValue = 4.000000000e+02f;
    (*this).RootComponent = gen;
}

void AIGS_VehicleGenerator::OnVehicleDriveFinished(AIGS_VehicleBase* inVehicle) {
}

void AIGS_VehicleGenerator::OnAlarmed(EIGS_AlarmReason inReason) {
}

