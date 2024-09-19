#include "BTDecorator_OffenceType.h"
#include "IGS_OffenceData.h"

UBTDecorator_OffenceType::UBTDecorator_OffenceType() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482614"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Is Offence Type");
}

