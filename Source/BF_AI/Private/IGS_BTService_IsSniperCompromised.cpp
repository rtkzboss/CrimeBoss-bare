#include "IGS_BTService_IsSniperCompromised.h"

UIGS_BTService_IsSniperCompromised::UIGS_BTService_IsSniperCompromised() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("IsCompromisedKey"));
    (*this).IsCompromisedKey = gen;
    (*this).NodeName = TEXT("IsSniperCompromised");
}

