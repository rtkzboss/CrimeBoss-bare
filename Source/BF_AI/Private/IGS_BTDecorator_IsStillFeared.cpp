#include "IGS_BTDecorator_IsStillFeared.h"
#include "IGS_OffenceData.h"

UIGS_BTDecorator_IsStillFeared::UIGS_BTDecorator_IsStillFeared() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482623"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).DesiredTimeWithoutFear.Min = 2.000000000e+01f;
    (*this).DesiredTimeWithoutFear.Max = 5.000000000e+01f;
    (*this).DesiredTimeWithoutFearZiptieAddon.Min = 7.000000000e+01f;
    (*this).DesiredTimeWithoutFearZiptieAddon.Max = 1.000000000e+02f;
    (*this).NodeName = TEXT("Is Still Feared");
}

