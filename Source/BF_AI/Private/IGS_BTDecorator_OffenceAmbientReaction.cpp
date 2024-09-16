#include "IGS_BTDecorator_OffenceAmbientReaction.h"

UIGS_BTDecorator_OffenceAmbientReaction::UIGS_BTDecorator_OffenceAmbientReaction() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Offence Ambient Reaction");
}

