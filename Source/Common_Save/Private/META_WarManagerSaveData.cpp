#include "META_WarManagerSaveData.h"

FMETA_WarManagerSaveData::FMETA_WarManagerSaveData() {
    (*this).GangsInfo = TMap<EMETA_Gang, FMETA_GangInfo>{};
    (*this).ChanceCounterToAttackAdjacentTerritory = TMap<EMETA_Gang, float>{};
    (*this).AttemptsToCaptureTileCounter = 0;
    (*this).TradeRelationshipWithGangs = TMap<EMETA_TradeVendor, EMETA_TradeRelationship>{};
    (*this).GangAttacksCooldown = TMap<EMETA_Gang, int32>{};
    (*this).CounterForSpecialTier = TMap<EMETA_Gang, int32>{};
    (*this).TradeVendorsCooldown = TMap<EMETA_TradeVendor, int32>{};
    (*this).TodaysLockedTilesForAI = TArray<FGameplayTag>{};
    (*this).TurfHistory = TMap<int32, FMETA_TurfHistory>{};
    (*this).DaysWithMoreAttack = 0;
    (*this).AILastTileConfigIndex = 0;
    (*this).bIsAllTileCaptured = false;
    (*this).bIsAllGangsEradicated = false;
    (*this).GangChangeArmyTierQueue = TMap<EMETA_Gang, FMETA_GangArmyTierChangeQueueData>{};
}
