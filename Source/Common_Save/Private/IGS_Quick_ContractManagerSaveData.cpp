#include "IGS_Quick_ContractManagerSaveData.h"

FIGS_Quick_ContractManagerSaveData::FIGS_Quick_ContractManagerSaveData() {
    (*this).AvailableContracts = {};
    (*this).ActiveContractMissions.MoneyMakingMissions = {};
    (*this).ActiveContractMissions.AmbushMissions = {};
    (*this).ActiveContractMissions.StoryMissions = {};
    (*this).ActiveContractMissions.TradeMissions = {};
    (*this).ActiveContractMissions.TradeDealSellMissions = {};
    (*this).ActiveContractMissions.CinematicMissions = {};
    (*this).ActiveContractMissions.TurfWarMissions = {};
    (*this).ActiveContractMissions.OtherMissions = {};
}
