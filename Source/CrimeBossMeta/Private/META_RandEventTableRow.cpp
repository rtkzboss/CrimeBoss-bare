#include "META_RandEventTableRow.h"

FMETA_RandEventTableRow::FMETA_RandEventTableRow() {
    (*this).ID = FGameplayTag();
    (*this).EvenCategory = EMETA_RandEventCategory::None;
    (*this).Partner = EMETA_Partner::None;
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::GodFather;
    (*this).MinHeat = EMETA_Heat::Low;
    (*this).MinInvestigation = 0.000000000e+00f;
    (*this).UnlockAssetID = FGameplayTag();
    (*this).TargetGang.bAutomaticGangSelection = true;
    (*this).TargetGang.TargetGang = EMETA_Gang::None;
    (*this).TargetGang.ConsideringTimeInDays = 7;
    (*this).TargetGang.OccupiedTerritoriesOfOtherGang = -1;
    (*this).TargetGang.OccupiedTerritoriesOfPlayer = -1;
    (*this).TargetGang.LostOwnTerritoriesByOtherGang = -1;
    (*this).TargetGang.LostOwnTerritoriesByPlayer = -1;
    (*this).Chance = 5.000000000e-01f;
    (*this).CooldownForEvent = 0;
    (*this).bUseCutsceneSpecificationPerGang = false;
    (*this).CutsceneID = FText::GetEmpty();
    (*this).CutscenesPerGang = TMap<EMETA_Gang, FText>{};
    (*this).DebugText = FText::GetEmpty();
    (*this).MissionID = nullptr;
    (*this).PriceMultiplier.Min = 0.000000000e+00f;
    (*this).PriceMultiplier.Max = 0.000000000e+00f;
    (*this).bCanBeSelectedEvenIfPlayerHasNotEnoughMoney = false;
    (*this).Rewards = TArray<FMETA_RandEventReward>{};
}
