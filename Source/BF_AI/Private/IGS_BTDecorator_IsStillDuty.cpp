#include "IGS_BTDecorator_IsStillDuty.h"
#include "IGS_OffenceData.h"

UIGS_BTDecorator_IsStillDuty::UIGS_BTDecorator_IsStillDuty() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482624"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Is Still Duty");
}

