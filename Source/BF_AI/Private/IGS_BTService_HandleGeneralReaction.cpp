#include "IGS_BTService_HandleGeneralReaction.h"

UIGS_BTService_HandleGeneralReaction::UIGS_BTService_HandleGeneralReaction() {
    (*this).GeneralReactionDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Handle Global Reaction(s)");
}

