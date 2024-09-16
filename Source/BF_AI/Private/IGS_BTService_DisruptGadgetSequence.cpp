#include "IGS_BTService_DisruptGadgetSequence.h"

UIGS_BTService_DisruptGadgetSequence::UIGS_BTService_DisruptGadgetSequence() {
    (*this).BestGadget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestGadget, 0)) = 255;
    (*this).NodeName = TEXT("Disrupt Gadget Sequence");
}

