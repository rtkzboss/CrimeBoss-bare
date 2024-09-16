#include "IGS_BTDecorator_HasThrowSlot.h"

UIGS_BTDecorator_HasThrowSlot::UIGS_BTDecorator_HasThrowSlot() {
    (*this).ThrowSlotKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Has Throw Slot");
}

