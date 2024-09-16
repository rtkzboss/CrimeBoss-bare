#include "IGS_BTService_EvaluateDisruptingGadgets.h"

UIGS_BTService_EvaluateDisruptingGadgets::UIGS_BTService_EvaluateDisruptingGadgets() {
    (*this).BestGadget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestGadget, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Disrupting Gadgets");
}

