#include "META_PerkInfo.h"

FMETA_PerkInfo::FMETA_PerkInfo() {
    (*this).Bonus = 0;
    (*this).ChanceForBetterPrice = TMap<EMETA_PerkOptions, FMETA_Chance>{};
    (*this).ChanceForNoDeal = TMap<EMETA_PerkOptions, FMETA_Chance>{};
    (*this).ChanceForVendorToAttack = TMap<EMETA_PerkOptions, FMETA_Chance>{};
}
