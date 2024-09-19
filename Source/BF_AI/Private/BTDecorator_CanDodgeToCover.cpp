#include "BTDecorator_CanDodgeToCover.h"

UBTDecorator_CanDodgeToCover::UBTDecorator_CanDodgeToCover() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("MoveToPositionKey"));
    (*this).MoveToPositionKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("ReactToThreathKey"));
    (*this).ReactToThreathKey = gen2;
    (*this).NodeName = TEXT("Can Dodge To Cover");
}

