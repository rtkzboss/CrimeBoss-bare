#include "BTDecorator_IsSeriousOffence.h"
#include "IGS_OffenceData.h"

UBTDecorator_IsSeriousOffence::UBTDecorator_IsSeriousOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482625"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Is Serious Offence");
}

