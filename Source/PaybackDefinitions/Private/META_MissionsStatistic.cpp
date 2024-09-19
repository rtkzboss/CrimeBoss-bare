#include "META_MissionsStatistic.h"

FMETA_MissionsStatistic::FMETA_MissionsStatistic() {
    (*this).FinishedMissions = TArray<FMETA_FinishedMissionInfo>{};
    (*this).FinishedMissionsDependsFromStars = TMap<int32, int32>{};
    (*this).LostMissions = TArray<FMETA_FinishedMissionInfo>{};
    (*this).FinishedBigHeists = TArray<FMETA_FinishedMissionInfo>{};
    (*this).CountOftFinishedBigHeists = 0;
    (*this).CountOfLostBigHeists = 0;
    (*this).FinishedMissionWithoutKills = TArray<FMETA_FinishedMissionInfo>{};
    (*this).MissionWithStels = 0;
    (*this).FinishedMissionWithStels = 0;
    (*this).PlayedAmbushes = 0;
    (*this).SurvivedAmbushes = 0;
    (*this).PlayedWarehouseSiege = 0;
}
