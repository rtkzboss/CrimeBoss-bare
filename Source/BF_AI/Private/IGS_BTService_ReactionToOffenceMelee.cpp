#include "IGS_BTService_ReactionToOffenceMelee.h"

UIGS_BTService_ReactionToOffenceMelee::UIGS_BTService_ReactionToOffenceMelee() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Reaction To Offence Melee");
}

