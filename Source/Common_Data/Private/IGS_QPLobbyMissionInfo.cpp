#include "IGS_QPLobbyMissionInfo.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_ObjectiveReward.h"

FIGS_QPLobbyMissionInfo::FIGS_QPLobbyMissionInfo() {
    (*this).MissionID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    (*this).ObjectiveMonetaryValue = 0;
    (*this).MaxMonetaryValue = 0;
    (*this).FirstStarReward = 0;
    (*this).SecondStarReward = 0;
    (*this).ThirdStarReward = 0;
    (*this).MonetaryLootValue = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ObjectiveID, 0)) = NAME_None;
    (*this).ObjectiveReward.RewardType = EMETA_ObjectiveReward::None;
    (*this).ObjectiveReward.Cash = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ObjectiveReward.LootItem, 0)) = NAME_None;
    (*this).ObjectiveReward.LootMonetaryValue = 0;
    (*this).ObjectiveReward.WeaponQuality = EMETA_ItemQuality::None;
    (*this).ObjectiveReward.WeaponID = nullptr;
    (*this).ObjectiveReward.SoldiersAmount = 0;
}
