#include "BTDecorator_CanRollToCover.h"

UBTDecorator_CanRollToCover::UBTDecorator_CanRollToCover() {
    FBlackboardKeySelector gen;
    gen.AddFloatFilter(this, TEXT("DodgeDistanceKey"));
    (*this).DodgeDistanceKey = gen;
    (*this).NodeName = TEXT("Can Roll To Cover");
}

