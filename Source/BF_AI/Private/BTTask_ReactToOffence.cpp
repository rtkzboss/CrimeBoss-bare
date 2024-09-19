#include "BTTask_ReactToOffence.h"
#include "IGS_OffenceData.h"

UBTTask_ReactToOffence::UBTTask_ReactToOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482494"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("React To Offence");
}

