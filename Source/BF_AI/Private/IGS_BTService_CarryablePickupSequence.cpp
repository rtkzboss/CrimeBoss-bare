#include "IGS_BTService_CarryablePickupSequence.h"

UIGS_BTService_CarryablePickupSequence::UIGS_BTService_CarryablePickupSequence() {
    (*this).BestCarryablePickup.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestCarryablePickup, 0)) = 255;
    (*this).NodeName = TEXT("Weapon Pickup Sequence");
}

