#include "IGS_ScanLookAtTriggerComponent.h"

UIGS_ScanLookAtTriggerComponent::UIGS_ScanLookAtTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ScreenPercentage = 8.000000119e-01f;
    (*this).bIsScanEnabled = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_ScanLookAtTriggerComponent::SetScanEnabled(bool inState) {
}

void UIGS_ScanLookAtTriggerComponent::SetIgnoreComponents(TArray<UPrimitiveComponent*> inIgnoreActorComponents) {
}

void UIGS_ScanLookAtTriggerComponent::SetIgnoreActors(TArray<AActor*> inIgnoreActors) {
}

void UIGS_ScanLookAtTriggerComponent::Server_Trigger_Implementation(UIGS_LookAtTriggerComponent* inInteractiveComponent) {
}
bool UIGS_ScanLookAtTriggerComponent::Server_Trigger_Validate(UIGS_LookAtTriggerComponent* inInteractiveComponent) {
    return true;
}

