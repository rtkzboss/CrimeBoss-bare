#include "IGS_DodgeAnimTable.h"

FIGS_DodgeAnimTable::FIGS_DodgeAnimTable() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Dodge.Unknown");
    (*this).AnimVariations = {};
}
