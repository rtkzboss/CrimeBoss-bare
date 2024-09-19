#include "IGS_ActiveChainData.h"
#include "CommonHeisterData.h"
#include "META_WeaponInventoryObject.h"
#include "IGS_MissionResult.h"
#include "IGS_Quick_ChainPlayerCharacters.h"
#include "Templates/SubclassOf.h"

FIGS_ActiveChainData::FIGS_ActiveChainData() {
    (*this).ChainType = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ActiveChainInfo.ActiveMissionIndex = 0;
    (*this).ActiveChainInfo.ActiveChainContractID = nullptr;
    (*this).ActiveChainMissionSteps = TArray<FIGS_ChainMissionEntry>{};
    (*this).ActiveChainMissions = TArray<UMETA_BaseFPSMission*>{};
    (*this).CurrentMission = nullptr;
    (*this).ActiveChainResults.MissionName = FText::GetEmpty();
    (*this).ActiveChainResults.ChainContractID = nullptr;
    (*this).ActiveChainResults.StarRating = 0;
    (*this).ActiveChainResults.Score = 0;
    (*this).ActiveChainResults.MoneyRewardTotal = 0;
    (*this).ActiveChainResults.RespectRewardAfterLastMission = 0;
    (*this).ActiveChainResults.WeaponsReward = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).ActiveChainResults.WeaponTagsReward = TArray<FGameplayTag>{};
    (*this).ActiveChainResults.QuickMissionResults = TArray<FIGS_MissionResult>{};
    (*this).ActiveChainResults.PlayerHeisters = TArray<FIGS_Quick_ChainPlayerCharacters>{};
    (*this).ActiveChainResults.RemainingHeisters = TArray<FCommonHeisterData>{};
    (*this).ActiveChainResults.Completed = false;
    (*this).ChainCrew = TArray<UMETA_Character*>{};
    (*this).ChainCrewInfo = TArray<FMETA_CharacterInfo>{};
    (*this).MissionData = TMap<FGameplayTag, int32>{};
    (*this).ChainMoney = 0;
}
