#include "IGS_SpecialObjectiveAnimsTableRow.h"

FIGS_SpecialObjectiveAnimsTableRow::FIGS_SpecialObjectiveAnimsTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Patrol.Unknown");
    (*this).AnimVariations = {};
    (*this).FemaleAnimVariations = {};
    (*this).FemaleWithHeelsAnimVariations = {};
    (*this).Looped = false;
}
