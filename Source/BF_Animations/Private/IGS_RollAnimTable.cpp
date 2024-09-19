#include "IGS_RollAnimTable.h"

FIGS_RollAnimTable::FIGS_RollAnimTable() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Roll.Unknown"));
    (*this).AnimVariations = TArray<UAnimMontage*>{};
}
