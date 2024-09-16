#include "BTDecorator_CancelOnReactionPending.h"

UBTDecorator_CancelOnReactionPending::UBTDecorator_CancelOnReactionPending() {
    (*this).ReactToThreathKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).CancelDelay = 3.000000119e-01f;
    (*this).NodeName = TEXT("Cancel On Reaction pending");
}

