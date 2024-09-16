#include "META_StashManagerSaveData.h"

FMETA_StashManagerSaveData::FMETA_StashManagerSaveData() {
    (*this).WeaponsStash = {};
    (*this).Equipment = {};
    (*this).ActionCards = {};
    (*this).ActionCardsDurationCounter = {};
    (*this).PlayerRespect = EMETA_RespectLvl::Low;
    (*this).Army = 0;
    (*this).AvailableArmy = 0;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
    (*this).PartnersInfo = {};
    (*this).Loot = {};
    (*this).CurrentLootValueWasSoldToPawnShop = 0;
    (*this).PawnShopTrends = {};
    (*this).LastDayWhenWarehouseAttackStarted = -1;
    (*this).ChanceWarehouseAttack = 0;
    (*this).WarehouseAttackMissionID = nullptr;
    (*this).LootForWarehouseAttack = {};
    (*this).MoneyForWarehouseAttack = 0;
}
