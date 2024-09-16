#include "IGS_BTTask_ThrowBagSlotTransformToBB.h"

UIGS_BTTask_ThrowBagSlotTransformToBB::UIGS_BTTask_ThrowBagSlotTransformToBB() {
    (*this).ThrowSlotKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).ThrowSlotPositionKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotPositionKey, 0)) = 255;
    (*this).ThrowSlotLookAtPositionKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotLookAtPositionKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Bag Slot Transform To BB");
}

