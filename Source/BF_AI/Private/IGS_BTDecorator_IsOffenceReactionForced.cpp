#include "IGS_BTDecorator_IsOffenceReactionForced.h"

UIGS_BTDecorator_IsOffenceReactionForced::UIGS_BTDecorator_IsOffenceReactionForced() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Offence Reaction Forced");
}

