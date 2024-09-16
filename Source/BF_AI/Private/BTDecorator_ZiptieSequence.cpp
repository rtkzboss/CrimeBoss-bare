#include "BTDecorator_ZiptieSequence.h"

UBTDecorator_ZiptieSequence::UBTDecorator_ZiptieSequence() {
    (*this).CivToZiptieKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Ziptie Sequence");
}

