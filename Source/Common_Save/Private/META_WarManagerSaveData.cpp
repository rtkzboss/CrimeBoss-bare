#include "META_WarManagerSaveData.h"

FMETA_WarManagerSaveData::FMETA_WarManagerSaveData() {
    (*this).GangsInfo = {};
    (*this).ChanceCounterToAttackAdjacentTerritory = {};
    (*this).AttemptsToCaptureTileCounter = 0;
    (*this).TradeRelationshipWithGangs = {};
    (*this).GangAttacksCooldown = {};
    (*this).CounterForSpecialTier = {};
    (*this).TradeVendorsCooldown = {};
    (*this).TodaysLockedTilesForAI = {};
    (*this).TurfHistory = {};
    (*this).DaysWithMoreAttack = 0;
    (*this).AILastTileConfigIndex = 0;
    (*this).bIsAllTileCaptured = false;
    (*this).bIsAllGangsEradicated = false;
    (*this).GangChangeArmyTierQueue = {};
}
