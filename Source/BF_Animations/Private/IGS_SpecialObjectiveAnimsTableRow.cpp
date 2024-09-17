#include "IGS_SpecialObjectiveAnimsTableRow.h"

FIGS_SpecialObjectiveAnimsTableRow::FIGS_SpecialObjectiveAnimsTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Patrol.Unknown"));
    (*this).AnimVariations = {};
    (*this).FemaleAnimVariations = {};
    (*this).FemaleWithHeelsAnimVariations = {};
    (*this).Looped = false;
}
