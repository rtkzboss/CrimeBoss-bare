#include "META_PerkStatGroup.h"

FMETA_PerkStatGroup::FMETA_PerkStatGroup() {
    (*this).GroupName = TEXT("");
    (*this).PerkAttributes = TSet<FGameplayAttribute>{};
    (*this).Type = EMETA_PerkStatGroupUsage::PercentageHighest;
}
