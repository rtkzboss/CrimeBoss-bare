#include "IGS_InteractionStealthKillComponent.h"
#include "Components/ActorComponent.h"

UIGS_InteractionStealthKillComponent::UIGS_InteractionStealthKillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bServerFirst = true;
    (*this).InteractionDistance = 5.000000000e+01f;
    (*this).HUDDistance = 5.000000000e+01f;
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

