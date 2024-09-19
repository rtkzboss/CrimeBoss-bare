#include "BTDecorator_WantsReactToOffence.h"
#include "IGS_OffenceData.h"

UBTDecorator_WantsReactToOffence::UBTDecorator_WantsReactToOffence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482611"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("React To Offence");
}

