#include "BTTask_InCover.h"
#include "CoverPoint.h"

UBTTask_InCover::UBTTask_InCover() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("CoverForwardPointKey"));
    (*this).CoverForwardPointKey = gen;
    (*this).RotationDelay = 8.000000119e-01f;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482524"), UCoverPoint::StaticClass());
    (*this).BlackboardKey = gen2;
    (*this).NodeName = TEXT("In Cover");
}

