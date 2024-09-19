#include "BTTask_CoverAttackOut.h"

UBTTask_CoverAttackOut::UBTTask_CoverAttackOut() {
    (*this).CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("TagretLastSeenPosition"));
    (*this).TagretLastSeenPosition = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("CoverForwardPoint"));
    (*this).CoverForwardPoint = gen2;
    (*this).NodeName = TEXT("Peak From Cover");
}

