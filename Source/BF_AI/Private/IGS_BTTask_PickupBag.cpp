#include "IGS_BTTask_PickupBag.h"

UIGS_BTTask_PickupBag::UIGS_BTTask_PickupBag() {
    (*this).BestPickupBag.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestPickupBag, 0)) = 255;
    (*this).NodeName = TEXT("Pickup Bag");
}

