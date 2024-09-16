#include "BTDecorator_WantsInspectOffence.h"

UBTDecorator_WantsInspectOffence::UBTDecorator_WantsInspectOffence() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Inspect Offence");
}

