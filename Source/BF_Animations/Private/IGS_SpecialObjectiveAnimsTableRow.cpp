#include "IGS_SpecialObjectiveAnimsTableRow.h"

FIGS_SpecialObjectiveAnimsTableRow::FIGS_SpecialObjectiveAnimsTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Patrol.Unknown"));
    (*this).AnimVariations = TArray<FIGS_SpecialObjectiveAnimData>{};
    (*this).FemaleAnimVariations = TArray<FIGS_SpecialObjectiveAnimData>{};
    (*this).FemaleWithHeelsAnimVariations = TArray<FIGS_SpecialObjectiveAnimData>{};
    (*this).Looped = false;
}
