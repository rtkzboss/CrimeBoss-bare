#include "IGS_BTService_LookAimOnPoint.h"

UIGS_BTService_LookAimOnPoint::UIGS_BTService_LookAimOnPoint() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("PointKey"));
    (*this).PointKey = gen;
    (*this).NodeName = TEXT("Look Aim On Point");
}

