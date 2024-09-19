#include "BTDecorator_CancelOnReactionPending.h"

UBTDecorator_CancelOnReactionPending::UBTDecorator_CancelOnReactionPending() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("ReactToThreathKey"));
    (*this).ReactToThreathKey = gen;
    (*this).CancelDelay = 3.000000119e-01f;
    (*this).NodeName = TEXT("Cancel On Reaction pending");
}

