#include "META_TradeDealSellMissionSave.h"

FMETA_TradeDealSellMissionSave::FMETA_TradeDealSellMissionSave() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootTag, 0)) = NAME_None;
    (*this).LootAmount = 0;
    (*this).Price = 0;
}
