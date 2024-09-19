#include "IGS_BTDecorator_OffenceAmbientReaction.h"
#include "IGS_OffenceData.h"

UIGS_BTDecorator_OffenceAmbientReaction::UIGS_BTDecorator_OffenceAmbientReaction() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482617"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Offence Ambient Reaction");
}

