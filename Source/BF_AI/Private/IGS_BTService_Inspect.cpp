#include "IGS_BTService_Inspect.h"

UIGS_BTService_Inspect::UIGS_BTService_Inspect() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Inspect");
}

