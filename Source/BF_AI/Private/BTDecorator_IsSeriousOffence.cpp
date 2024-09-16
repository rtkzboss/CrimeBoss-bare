#include "BTDecorator_IsSeriousOffence.h"

UBTDecorator_IsSeriousOffence::UBTDecorator_IsSeriousOffence() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Serious Offence");
}

