#include "BTDecorator_CoverPeekSequence.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

UBTDecorator_CoverPeekSequence::UBTDecorator_CoverPeekSequence() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("UpdateCoverKey"));
    (*this).UpdateCoverKey = gen;
    (*this).NodeName = TEXT("Cover Peek Sequence");
}

