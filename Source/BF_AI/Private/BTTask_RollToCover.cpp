#include "BTTask_RollToCover.h"

UBTTask_RollToCover::UBTTask_RollToCover() {
    FBlackboardKeySelector gen;
    gen.AddFloatFilter(this, TEXT("DodgeDistanceKey"));
    (*this).DodgeDistanceKey = gen;
    (*this).NodeName = TEXT("Roll To Cover");
}

