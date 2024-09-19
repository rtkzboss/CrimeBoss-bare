#include "BTTask_SetFollowRotation.h"

UBTTask_SetFollowRotation::UBTTask_SetFollowRotation() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("LookPosKey"));
    (*this).LookPosKey = gen;
    (*this).NodeName = TEXT("Set Follow Rotation");
}

