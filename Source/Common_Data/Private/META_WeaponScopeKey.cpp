#include "META_WeaponScopeKey.h"

FMETA_WeaponScopeKey::FMETA_WeaponScopeKey() {
    (*this).WieldableClass = FGameplayTag();
    (*this).Quality = EMETA_ItemQuality::None;
}
