#include "IGS_BTService_EvaluateBags.h"

UIGS_BTService_EvaluateBags::UIGS_BTService_EvaluateBags() {
    (*this).BestBagKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestBagKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Pickup Bag");
}

