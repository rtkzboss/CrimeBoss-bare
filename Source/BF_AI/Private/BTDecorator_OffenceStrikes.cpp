#include "BTDecorator_OffenceStrikes.h"
#include "IGS_OffenceData.h"

UBTDecorator_OffenceStrikes::UBTDecorator_OffenceStrikes() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482615"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Is Offence Strikes");
}

