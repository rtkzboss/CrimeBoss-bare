#include "IGS_BTTask_ThrowBagSlotToBB.h"

UIGS_BTTask_ThrowBagSlotToBB::UIGS_BTTask_ThrowBagSlotToBB() {
    (*this).ThrowRequestKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    (*this).ThrowSlotKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Bag Slot To BB");
}

