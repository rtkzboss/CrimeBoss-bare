#include "IGS_InteractionTileBase.h"
#include "Components/ActorComponent.h"

UIGS_InteractionTileBase::UIGS_InteractionTileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

