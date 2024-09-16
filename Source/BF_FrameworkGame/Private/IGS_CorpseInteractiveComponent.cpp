#include "IGS_CorpseInteractiveComponent.h"
#include "Components/ActorComponent.h"

UIGS_CorpseInteractiveComponent::UIGS_CorpseInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsHoldable = true;
    (*this).TimerHoldTime = 3.000000000e+00f;
    (*this).NameToDisplay = FText::FromString(TEXT("Unknown name"));
    (*this).bOverrideMasterOutline = false;
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

