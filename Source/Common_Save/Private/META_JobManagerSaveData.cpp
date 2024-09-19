#include "META_JobManagerSaveData.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "Templates/SubclassOf.h"

FMETA_JobManagerSaveData::FMETA_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    (*this).CurrentJobTileID = FGameplayTag();
    (*this).JobsOnMap.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).JobsOnMap.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).JobsOnMap.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).JobsOnMap.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).JobsOnMap.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).JobsOnMap.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).JobsOnMap.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).JobsOnMap.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).JobParameters = TMap<TSubclassOf<UMETA_MissionID>, FMETA_JobParameters>{};
    (*this).JobsCompletedAmount = 0;
    (*this).JobsSpawnDay = TMap<TSubclassOf<UMETA_MissionID>, int32>{};
    (*this).bWasPlayerTransferredToFPSSide = false;
    (*this).FinishedMissions = TMap<TSubclassOf<UMETA_MissionID>, FMETA_FinishedMissionInfo>{};
    (*this).bUsingTemporaryCrewAfterFPS = EMETA_UsingCrewInGraph::TemporaryCrew;
    (*this).RecentlyPlayedPresetsPerScenario = TMap<FGameplayTag, FMETA_PlayedPresets>{};
    (*this).RecentlyPlayedJobData = TMap<FGameplayTag, int32>{};
}
