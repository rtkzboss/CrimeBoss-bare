#include "BTDecorator_SquadEscapeSequence.h"

UBTDecorator_SquadEscapeSequence::UBTDecorator_SquadEscapeSequence() {
    (*this).EscapePointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).EscapePointKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Escape Sequence");
}

