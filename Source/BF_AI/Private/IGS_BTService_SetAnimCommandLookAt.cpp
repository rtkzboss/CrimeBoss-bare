#include "IGS_BTService_SetAnimCommandLookAt.h"

UIGS_BTService_SetAnimCommandLookAt::UIGS_BTService_SetAnimCommandLookAt() {
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("OutLookPos"));
    (*this).OutLookPos = gen;
    (*this).NodeName = TEXT("Set Anim Command Look At");
}

