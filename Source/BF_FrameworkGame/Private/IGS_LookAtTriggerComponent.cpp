#include "IGS_LookAtTriggerComponent.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_LookAtTriggerComponent::UIGS_LookAtTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TriggerDistance = 1.500000000e+02f;
    (*this).LookAtTime = 5.000000000e+00f;
    (*this).bSingleUse = true;
    (*this).bIsEnabled = true;
    (*this).mR_bIsEnabledRuntime = true;
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_LookAtTriggerComponent::SetEnabled(bool inEnabled) {
}

void UIGS_LookAtTriggerComponent::Server_Trigger_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

bool UIGS_LookAtTriggerComponent::Server_CanTrigger_Implementation(AIGS_GameCharacterFramework* inInstigator) {
    return false;
}

void UIGS_LookAtTriggerComponent::ResetTrigger() {
}

void UIGS_LookAtTriggerComponent::Client_Trigger_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

bool UIGS_LookAtTriggerComponent::Client_CanTrigger_Implementation(AIGS_GameCharacterFramework* inInstigator) {
    return false;
}

void UIGS_LookAtTriggerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_LookAtTriggerComponent, mR_bIsEnabledRuntime);
    DOREPLIFETIME(UIGS_LookAtTriggerComponent, mR_bIsTriggered);
}

