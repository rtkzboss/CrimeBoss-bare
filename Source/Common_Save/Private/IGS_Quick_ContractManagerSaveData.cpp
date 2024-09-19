#include "IGS_Quick_ContractManagerSaveData.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"

FIGS_Quick_ContractManagerSaveData::FIGS_Quick_ContractManagerSaveData() {
    (*this).AvailableContracts = TArray<TSubclassOf<UIGS_ContractID>>{};
    (*this).ActiveContractMissions.MoneyMakingMissions = TArray<FMETA_MoneyMakingMissionSave>{};
    (*this).ActiveContractMissions.AmbushMissions = TArray<FMETA_AmbushMissionSave>{};
    (*this).ActiveContractMissions.StoryMissions = TArray<FMETA_StoryMissionSave>{};
    (*this).ActiveContractMissions.TradeMissions = TArray<FMETA_TradeMissionSave>{};
    (*this).ActiveContractMissions.TradeDealSellMissions = TArray<FMETA_TradeDealSellMissionSave>{};
    (*this).ActiveContractMissions.CinematicMissions = TArray<FMETA_BaseMissionSave>{};
    (*this).ActiveContractMissions.TurfWarMissions = TArray<FMETA_TurfWarMissionSave>{};
    (*this).ActiveContractMissions.OtherMissions = TArray<TSubclassOf<UMETA_MissionID>>{};
}
