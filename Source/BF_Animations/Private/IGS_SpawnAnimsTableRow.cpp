#include "IGS_SpawnAnimsTableRow.h"

FIGS_SpawnAnimsTableRow::FIGS_SpawnAnimsTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Spawn.Unknown");
    (*this).AnimVariations = {};
}
