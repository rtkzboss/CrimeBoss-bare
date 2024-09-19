#include "IGS_BTService_Inspect.h"
#include "IGS_OffenceData.h"

UIGS_BTService_Inspect::UIGS_BTService_Inspect() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482572"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Inspect");
}

