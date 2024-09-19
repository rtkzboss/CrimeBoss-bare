#include "IGS_BTService_FocusOnOffence.h"
#include "IGS_OffenceData.h"

UIGS_BTService_FocusOnOffence::UIGS_BTService_FocusOnOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482582"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Focus On Offence");
}

