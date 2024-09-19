#include "META_GangTradeInfo.h"

FMETA_GangTradeInfo::FMETA_GangTradeInfo() {
    (*this).CommoditiesWithPriceBonus = TMap<FGameplayTag, float>{};
    (*this).BannedCommodities = FGameplayTagContainer();
    (*this).DayCooldownAfterFailTrade = 0;
}
