#include "META_StashManagerSaveData.h"
#include "Templates/SubclassOf.h"

FMETA_StashManagerSaveData::FMETA_StashManagerSaveData() {
    (*this).WeaponsStash = TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray>{};
    (*this).Equipment = TArray<FMETA_EquipmentSaveData>{};
    (*this).ActionCards = TMap<TSoftClassPtr<UMETA_BaseActionCard>, FMETA_ActionCardStrenghtAmount>{};
    (*this).ActionCardsDurationCounter = TMap<FMETA_ActionCardID, int32>{};
    (*this).PlayerRespect = EMETA_RespectLvl::Low;
    (*this).Army = 0;
    (*this).AvailableArmy = 0;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
    (*this).PartnersInfo = TMap<EMETA_Partner, FMETA_PartnerInfo>{};
    (*this).Loot = TMap<FGameplayTag, int32>{};
    (*this).CurrentLootValueWasSoldToPawnShop = 0;
    (*this).PawnShopTrends = TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime>{};
    (*this).LastDayWhenWarehouseAttackStarted = -1;
    (*this).ChanceWarehouseAttack = 0;
    (*this).WarehouseAttackMissionID = nullptr;
    (*this).LootForWarehouseAttack = TMap<FGameplayTag, int32>{};
    (*this).MoneyForWarehouseAttack = 0;
}
