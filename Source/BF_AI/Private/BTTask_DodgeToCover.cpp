#include "BTTask_DodgeToCover.h"

UBTTask_DodgeToCover::UBTTask_DodgeToCover() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("IsDodgingKey"));
    gen.AddBoolFilter(this, TEXT("IsDodgingKey"));
    (*this).IsDodgingKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("MoveToPositionKey"));
    (*this).MoveToPositionKey = gen2;
    (*this).NodeName = TEXT("Dodge To Cover");
}

