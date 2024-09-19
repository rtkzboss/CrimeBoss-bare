#include "BTTask_SetRoationFromDefendPoint.h"

UBTTask_SetRoationFromDefendPoint::UBTTask_SetRoationFromDefendPoint() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("LookPosKey"));
    (*this).LookPosKey = gen;
    (*this).NodeName = TEXT("Set Roation From Defend Point");
}

