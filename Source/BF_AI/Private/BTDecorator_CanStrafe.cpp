#include "BTDecorator_CanStrafe.h"

UBTDecorator_CanStrafe::UBTDecorator_CanStrafe() {
    FBlackboardKeySelector gen;
    gen.AddFloatFilter(this, TEXT("DodgeDistanceKey"));
    (*this).DodgeDistanceKey = gen;
    (*this).UseLongStrafe = true;
    (*this).UseMediumStrafe = true;
    (*this).NodeName = TEXT("Can Strafe");
}

