#include "IGS_BTTask_DisruptGadget.h"

UIGS_BTTask_DisruptGadget::UIGS_BTTask_DisruptGadget() {
    (*this).DisruptingGadget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DisruptingGadget, 0)) = 255;
    (*this).NodeName = TEXT("Disrupt Gadget");
}

