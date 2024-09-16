#include "IGS_WeakSpotComponent.h"

UIGS_WeakSpotComponent::UIGS_WeakSpotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

bool UIGS_WeakSpotComponent::SetWeakSpotEnabled(const UPrimitiveComponent* inWeakSpotReference, const bool inEnabled) {
    return false;
}

void UIGS_WeakSpotComponent::SetHeadIsWeakSpot(const bool inEnabled) {
}

bool UIGS_WeakSpotComponent::SetEnabled(const bool inEnabled) {
    return false;
}

bool UIGS_WeakSpotComponent::AddWeakSpot(const UPrimitiveComponent* inWeakSpotReference, const float inHealth, const bool inEnableAutomatically, const float inAIDamageMultiplier) {
    return false;
}

