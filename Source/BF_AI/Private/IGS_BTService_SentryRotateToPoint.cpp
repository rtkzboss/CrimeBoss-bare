#include "IGS_BTService_SentryRotateToPoint.h"

UIGS_BTService_SentryRotateToPoint::UIGS_BTService_SentryRotateToPoint() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("TargetPoint"));
    (*this).TargetPoint = gen;
    (*this).NodeName = TEXT("Sentry Rotate To Point");
}

