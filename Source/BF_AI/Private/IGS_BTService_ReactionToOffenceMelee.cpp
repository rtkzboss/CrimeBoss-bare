#include "IGS_BTService_ReactionToOffenceMelee.h"
#include "IGS_OffenceData.h"

UIGS_BTService_ReactionToOffenceMelee::UIGS_BTService_ReactionToOffenceMelee() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482567"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Reaction To Offence Melee");
}

