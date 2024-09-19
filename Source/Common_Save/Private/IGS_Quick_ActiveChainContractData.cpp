#include "IGS_Quick_ActiveChainContractData.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"

FIGS_Quick_ActiveChainContractData::FIGS_Quick_ActiveChainContractData() {
    (*this).ActiveChainContract = nullptr;
    (*this).ActiveChainMissionSteps = TArray<FIGS_ChainMissionEntry>{};
    (*this).ActiveChainMissions.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).ActiveChainMissions.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).ActiveChainMissions.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).ActiveChainMissions.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).ActiveChainMissions.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).ActiveChainMissions.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).ActiveChainMissions.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).ActiveChainMissions.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).ActiveMissionIndex = 0;
    (*this).CurrentChainResults = TArray<FIGS_MissionResult>{};
    (*this).GenericCrewHeisters = TArray<FMETA_GenericCharacterSave>{};
    (*this).UniqueCrewHeisters = TArray<FMETA_HeisterSaveData>{};
    (*this).MissionData = TMap<FGameplayTag, int32>{};
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ChainMoney = 0;
}
