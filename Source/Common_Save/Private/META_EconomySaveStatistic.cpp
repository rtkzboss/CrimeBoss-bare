#include "META_EconomySaveStatistic.h"

FMETA_EconomySaveStatistic::FMETA_EconomySaveStatistic() {
    (*this).BankruptcyCount = 0;
    (*this).SuccessfullyFinishedTrades = 0;
    (*this).WeaponsBought = TMap<UMETA_Weapon*, int32>{};
    (*this).SpentMoney = 0;
    (*this).EarnedMoney = 0;
    (*this).EarnedLoot = TMap<FGameplayTag, int32>{};
    (*this).SoldLoot = TMap<FGameplayTag, int32>{};
    (*this).LostMoneyAfterWarehouse = 0;
    (*this).LostLootAfterWarehouse = TMap<FGameplayTag, int32>{};
}
