#include "PropChildActorComponent.h"
#include "Components/ActorComponent.h"

UPropChildActorComponent::UPropChildActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

