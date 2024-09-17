#include "META_BMActiveEventLootData.h"

FMETA_BMActiveEventLootData::FMETA_BMActiveEventLootData() {
    (*this).Vendor = EMETA_TradeVendor::UNDEFINED;
    (*this).LootTag = FGameplayTag();
    (*this).MinLootValue = 0;
    (*this).MissionID = nullptr;
}
