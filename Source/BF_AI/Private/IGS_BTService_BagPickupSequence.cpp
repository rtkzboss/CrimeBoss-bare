#include "IGS_BTService_BagPickupSequence.h"

UIGS_BTService_BagPickupSequence::UIGS_BTService_BagPickupSequence() {
    (*this).BestPickupBag.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupBag, 0)) = 255;
    (*this).NodeName = TEXT("Bag Pickup Sequence");
}

