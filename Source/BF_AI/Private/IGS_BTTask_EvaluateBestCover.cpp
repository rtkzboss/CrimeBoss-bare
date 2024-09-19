#include "IGS_BTTask_EvaluateBestCover.h"
#include "CoverPoint.h"

UIGS_BTTask_EvaluateBestCover::UIGS_BTTask_EvaluateBestCover() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestCoverKey_Object_2147482535"), UCoverPoint::StaticClass());
    (*this).BestCoverKey = gen;
    (*this).NodeName = TEXT("Find Best Cover Point");
}

