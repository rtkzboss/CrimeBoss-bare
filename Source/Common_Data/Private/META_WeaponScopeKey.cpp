#include "META_WeaponScopeKey.h"

FMETA_WeaponScopeKey::FMETA_WeaponScopeKey() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WieldableClass, 0)) = NAME_None;
    (*this).Quality = EMETA_ItemQuality::None;
}
