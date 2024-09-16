#include "IGS_BTTask_PickupActor.h"

UIGS_BTTask_PickupActor::UIGS_BTTask_PickupActor() {
    (*this).PickupDelay = 1.000000000e+00f;
    (*this).BestPickupActor.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupActor, 0)) = 255;
    (*this).NodeName = TEXT("Pickup Actor");
}

