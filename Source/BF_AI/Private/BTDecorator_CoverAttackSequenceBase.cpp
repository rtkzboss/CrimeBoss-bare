#include "BTDecorator_CoverAttackSequenceBase.h"

UBTDecorator_CoverAttackSequenceBase::UBTDecorator_CoverAttackSequenceBase() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("UpdateCoverKey"));
    (*this).UpdateCoverKey = gen;
}

