#include "IGS_BTService_ZiptieSequence.h"

UIGS_BTService_ZiptieSequence::UIGS_BTService_ZiptieSequence() {
    (*this).CivToZiptieKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Ziptie Sequence");
}

