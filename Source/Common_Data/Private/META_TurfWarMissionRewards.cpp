#include "META_TurfWarMissionRewards.h"
#include "Templates/SubclassOf.h"

FMETA_TurfWarMissionRewards::FMETA_TurfWarMissionRewards() {
    (*this).LootType = FGameplayTag();
    (*this).LootAmount = 0;
    (*this).MoneyAmount = 0;
    (*this).SoldiersAmount = 0;
    (*this).Weapons = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).isFilledIn = false;
}
