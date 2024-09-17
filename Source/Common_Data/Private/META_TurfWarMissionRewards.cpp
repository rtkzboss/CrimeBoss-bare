#include "META_TurfWarMissionRewards.h"

FMETA_TurfWarMissionRewards::FMETA_TurfWarMissionRewards() {
    (*this).LootType = FGameplayTag();
    (*this).LootAmount = 0;
    (*this).MoneyAmount = 0;
    (*this).SoldiersAmount = 0;
    (*this).Weapons = {};
    (*this).isFilledIn = false;
}
