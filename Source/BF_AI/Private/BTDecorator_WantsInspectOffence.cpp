#include "BTDecorator_WantsInspectOffence.h"
#include "IGS_OffenceData.h"

UBTDecorator_WantsInspectOffence::UBTDecorator_WantsInspectOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482612"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Inspect Offence");
}

