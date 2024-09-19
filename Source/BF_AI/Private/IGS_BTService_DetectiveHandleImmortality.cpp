#include "IGS_BTService_DetectiveHandleImmortality.h"

UIGS_BTService_DetectiveHandleImmortality::UIGS_BTService_DetectiveHandleImmortality() {
    FBlackboardKeySelector gen;
    gen.AddIntFilter(this, TEXT("ReviveChargesKey"));
    (*this).ReviveChargesKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("DetectiveInitKey"));
    (*this).DetectiveInitKey = gen2;
    (*this).NodeName = TEXT("Detective Handle Immortality");
}

