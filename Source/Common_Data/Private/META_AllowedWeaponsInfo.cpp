#include "META_AllowedWeaponsInfo.h"

FMETA_AllowedWeaponsInfo::FMETA_AllowedWeaponsInfo() {
    (*this).MaxNumberOfWeapons = 1;
    (*this).WeaponClassChance = TMap<FGameplayTag, int32>{};
    (*this).WeaponQualityChance = TMap<EMETA_ItemQuality, int32>{};
}
