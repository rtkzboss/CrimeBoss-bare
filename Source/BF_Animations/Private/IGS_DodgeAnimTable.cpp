#include "IGS_DodgeAnimTable.h"

FIGS_DodgeAnimTable::FIGS_DodgeAnimTable() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Dodge.Unknown"));
    (*this).AnimVariations = {};
}
