#include "IGS_BTService_SetWaitLookAt.h"

UIGS_BTService_SetWaitLookAt::UIGS_BTService_SetWaitLookAt() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("OutLookPos"));
    (*this).OutLookPos = gen;
    (*this).NodeName = TEXT("Set Wait Look At");
}

