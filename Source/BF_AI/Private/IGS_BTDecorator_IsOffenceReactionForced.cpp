#include "IGS_BTDecorator_IsOffenceReactionForced.h"
#include "IGS_OffenceData.h"

UIGS_BTDecorator_IsOffenceReactionForced::UIGS_BTDecorator_IsOffenceReactionForced() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482626"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Is Offence Reaction Forced");
}

