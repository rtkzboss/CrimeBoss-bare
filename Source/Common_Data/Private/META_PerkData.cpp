#include "META_PerkData.h"

FMETA_PerkData::FMETA_PerkData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Perk = nullptr;
    (*this).Level = 1;
}
