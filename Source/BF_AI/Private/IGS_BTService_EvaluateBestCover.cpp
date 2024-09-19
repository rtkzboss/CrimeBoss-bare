#include "IGS_BTService_EvaluateBestCover.h"
#include "CoverPoint.h"

UIGS_BTService_EvaluateBestCover::UIGS_BTService_EvaluateBestCover() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestCoverKey_Object_2147482595"), UCoverPoint::StaticClass());
    (*this).BestCoverKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("IsDodgingKey"));
    (*this).IsDodgingKey = gen2;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Find Best Cover Point");
}

