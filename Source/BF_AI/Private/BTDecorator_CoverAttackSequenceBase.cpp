#include "BTDecorator_CoverAttackSequenceBase.h"

UBTDecorator_CoverAttackSequenceBase::UBTDecorator_CoverAttackSequenceBase() {
    (*this).UpdateCoverKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
}

