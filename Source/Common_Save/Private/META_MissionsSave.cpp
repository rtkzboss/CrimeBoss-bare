#include "META_MissionsSave.h"
#include "Templates/SubclassOf.h"

FMETA_MissionsSave::FMETA_MissionsSave() {
    (*this).MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
}
