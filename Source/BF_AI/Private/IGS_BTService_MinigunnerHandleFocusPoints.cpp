#include "IGS_BTService_MinigunnerHandleFocusPoints.h"

UIGS_BTService_MinigunnerHandleFocusPoints::UIGS_BTService_MinigunnerHandleFocusPoints() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("MoveToLookAtPosition"));
    (*this).MoveToLookAtPosition = gen;
    (*this).NodeName = TEXT("Minigunner Handle Focus Points");
}

