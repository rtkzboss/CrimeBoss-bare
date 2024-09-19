#include "IGS_SpawnAnimsTableRow.h"

FIGS_SpawnAnimsTableRow::FIGS_SpawnAnimsTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Spawn.Unknown"));
    (*this).AnimVariations = TArray<UAnimMontage*>{};
}
