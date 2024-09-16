#include "BTDecorator_MoveToIdlePointSequence.h"

UBTDecorator_MoveToIdlePointSequence::UBTDecorator_MoveToIdlePointSequence() {
    (*this).PatrolPointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).PatrolPointKey, 0)) = 255;
    (*this).NodeName = TEXT("Move To Idle Point Sequence");
}

