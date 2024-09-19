#include "IGS_BTService_OutlineOffence.h"
#include "IGS_OffenceData.h"

UIGS_BTService_OutlineOffence::UIGS_BTService_OutlineOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482568"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Outline Offence");
}

