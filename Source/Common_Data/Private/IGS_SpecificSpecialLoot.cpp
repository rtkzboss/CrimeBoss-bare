#include "IGS_SpecificSpecialLoot.h"

FIGS_SpecificSpecialLoot::FIGS_SpecificSpecialLoot() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    (*this).Value = 0;
}
