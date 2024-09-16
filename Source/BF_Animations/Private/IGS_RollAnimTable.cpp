#include "IGS_RollAnimTable.h"

FIGS_RollAnimTable::FIGS_RollAnimTable() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Roll.Unknown");
    (*this).AnimVariations = {};
}
