#include "IGS_BTService_FocusOnPoint.h"

UIGS_BTService_FocusOnPoint::UIGS_BTService_FocusOnPoint() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("PointKey"));
    (*this).PointKey = gen;
    (*this).NodeName = TEXT("Focus On Point");
}

