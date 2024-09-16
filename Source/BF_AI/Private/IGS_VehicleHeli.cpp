#include "IGS_VehicleHeli.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleHeli::AIGS_VehicleHeli(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StartBrakingDistance = 5.000000000e+01f;
    (*this).NeedsPassengers = true;
    auto gen = AActor::StaticClass()->FindPropertyByName("bReplicateMovement");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
    (*this).bReplicates = true;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    auto gen3 = AActor::StaticClass()->FindPropertyByName("ReplicatedMovement");
    (*gen3->ContainerPtrToValuePtr<FRepMovement>(&(*this), 0)).RotationQuantizationLevel = ERotatorQuantization::ShortComponents;
}

void AIGS_VehicleHeli::SetLookAt(AActor* Actor) {
}

void AIGS_VehicleHeli::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_VehicleHeli, mR_bCharactersSpawned);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetPosition);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetLookAtPosition);
}

