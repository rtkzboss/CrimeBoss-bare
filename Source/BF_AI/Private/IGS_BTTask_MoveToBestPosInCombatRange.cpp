#include "IGS_BTTask_MoveToBestPosInCombatRange.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_MoveToBestPosInCombatRange::UIGS_BTTask_MoveToBestPosInCombatRange() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("SuspectedTargetPos"));
    (*this).SuspectedTargetPos = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("LookPosKey"));
    gen2.AddVectorFilter(this, TEXT("LookPosKey"));
    gen2.AllowNoneAsValue(true);
    (*this).LookPosKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen3.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen3;
    FBlackboardKeySelector gen4;
    gen4.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482516"), AActor::StaticClass());
    gen4.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen4;
    (*this).NodeName = TEXT("Move to Best Pos in Combat Range");
}

