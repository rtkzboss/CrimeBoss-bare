#include "IGS_BTService_HeavySolveShockUsage.h"

UIGS_BTService_HeavySolveShockUsage::UIGS_BTService_HeavySolveShockUsage() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("ShouldUseShockKey"));
    (*this).ShouldUseShockKey = gen;
    (*this).NodeName = TEXT("Solve Heavy Shock Usage");
}

