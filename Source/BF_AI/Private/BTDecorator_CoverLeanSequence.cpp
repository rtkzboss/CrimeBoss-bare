#include "BTDecorator_CoverLeanSequence.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

UBTDecorator_CoverLeanSequence::UBTDecorator_CoverLeanSequence() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("UpdateCoverKey"));
    (*this).UpdateCoverKey = gen;
    (*this).NodeName = TEXT("Cover Lean Sequence");
}

