#include "IGS_BTService_SetRotateLookAt.h"

UIGS_BTService_SetRotateLookAt::UIGS_BTService_SetRotateLookAt() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("OutLookPos"));
    (*this).OutLookPos = gen;
    (*this).NodeName = TEXT("Set Rotate To Look At");
}

