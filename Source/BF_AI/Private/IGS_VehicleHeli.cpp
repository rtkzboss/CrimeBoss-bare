#include "IGS_VehicleHeli.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleHeli::AIGS_VehicleHeli(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StartBrakingDistance = 5.000000000e+01f;
    (*this).NeedsPassengers = true;
    (*this).SetReplicatingMovement(true);
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).GetReplicatedMovement_Mutable().RotationQuantizationLevel = ERotatorQuantization::ShortComponents;
}

void AIGS_VehicleHeli::SetLookAt(AActor* Actor) {
}

void AIGS_VehicleHeli::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_VehicleHeli, mR_bCharactersSpawned);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetPosition);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetLookAtPosition);
}

