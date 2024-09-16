#include "IGS_BTService_ThrowSequence.h"

UIGS_BTService_ThrowSequence::UIGS_BTService_ThrowSequence() {
    (*this).ThrowRequestKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    (*this).ThrowSlotKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Sequence");
}

