#include "BTTask_ReactToOffenceAmbient.h"
#include "IGS_OffenceData.h"

UBTTask_ReactToOffenceAmbient::UBTTask_ReactToOffenceAmbient() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482547"), UIGS_OffenceData::StaticClass());
    gen.AllowNoneAsValue(true);
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("ReactToOffenceAmbient");
}

