#include "META_VendorLootKey.h"

FMETA_VendorLootKey::FMETA_VendorLootKey() {
    (*this).Vendor = EMETA_TradeVendor::UNDEFINED;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loot, 0)) = NAME_None;
}
