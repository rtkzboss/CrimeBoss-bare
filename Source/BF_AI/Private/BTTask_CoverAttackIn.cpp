#include "BTTask_CoverAttackIn.h"

UBTTask_CoverAttackIn::UBTTask_CoverAttackIn() {
    (*this).CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    (*this).DurationMin = 5.000000000e-01f;
    (*this).DurationMax = 1.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("TagretLastSeenPosition"));
    (*this).TagretLastSeenPosition = gen;
    (*this).NodeName = TEXT("Hide To Cover");
}

