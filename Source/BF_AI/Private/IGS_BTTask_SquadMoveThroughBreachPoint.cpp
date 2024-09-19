#include "IGS_BTTask_SquadMoveThroughBreachPoint.h"

UIGS_BTTask_SquadMoveThroughBreachPoint::UIGS_BTTask_SquadMoveThroughBreachPoint() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("StackPosBlackboardKey"));
    (*this).StackPosBlackboardKey = gen;
    (*this).NodeName = TEXT("Squad Breach Move Through Breach Point");
}

