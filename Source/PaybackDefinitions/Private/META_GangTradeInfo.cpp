#include "META_GangTradeInfo.h"

FMETA_GangTradeInfo::FMETA_GangTradeInfo() {
    (*this).CommoditiesWithPriceBonus = {};
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).BannedCommodities, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).BannedCommodities, 0)) = {};
    (*this).DayCooldownAfterFailTrade = 0;
}
