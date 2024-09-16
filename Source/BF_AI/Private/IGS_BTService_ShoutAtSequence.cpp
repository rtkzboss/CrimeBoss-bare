#include "IGS_BTService_ShoutAtSequence.h"

UIGS_BTService_ShoutAtSequence::UIGS_BTService_ShoutAtSequence() {
    (*this).CharacterToShoutKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutKey, 0)) = 255;
    (*this).NodeName = TEXT("Shout At Sequence");
}

