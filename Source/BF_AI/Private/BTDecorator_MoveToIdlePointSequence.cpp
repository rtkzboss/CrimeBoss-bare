#include "BTDecorator_MoveToIdlePointSequence.h"
#include "IGS_PatrolPoint.h"

UBTDecorator_MoveToIdlePointSequence::UBTDecorator_MoveToIdlePointSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("PatrolPointKey_Object_2147482619"), AIGS_PatrolPoint::StaticClass());
    (*this).PatrolPointKey = gen;
    (*this).NodeName = TEXT("Move To Idle Point Sequence");
}

