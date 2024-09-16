#include "BTDecorator_WantsReactToOffence.h"

UBTDecorator_WantsReactToOffence::UBTDecorator_WantsReactToOffence() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("React To Offence");
}

