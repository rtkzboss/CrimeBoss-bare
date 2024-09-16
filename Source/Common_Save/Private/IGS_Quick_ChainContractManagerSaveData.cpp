#include "IGS_Quick_ChainContractManagerSaveData.h"

FIGS_Quick_ChainContractManagerSaveData::FIGS_Quick_ChainContractManagerSaveData() {
    (*this).ActiveChainsData = {};
    (*this).ActiveChainType = EIGS_ChainType::UrbanLegend;
    (*this).LastUsedGenericID = 0;
    (*this).ChainContractResults = {};
    (*this).WasPlayingChainMission = false;
}
