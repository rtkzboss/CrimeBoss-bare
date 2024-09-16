#include "META_EconomySaveStatistic.h"

FMETA_EconomySaveStatistic::FMETA_EconomySaveStatistic() {
    (*this).BankruptcyCount = 0;
    (*this).SuccessfullyFinishedTrades = 0;
    (*this).WeaponsBought = {};
    (*this).SpentMoney = 0;
    (*this).EarnedMoney = 0;
    (*this).EarnedLoot = {};
    (*this).SoldLoot = {};
    (*this).LostMoneyAfterWarehouse = 0;
    (*this).LostLootAfterWarehouse = {};
}
