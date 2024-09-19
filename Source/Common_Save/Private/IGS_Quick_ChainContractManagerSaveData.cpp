#include "IGS_Quick_ChainContractManagerSaveData.h"
#include "Templates/SubclassOf.h"

FIGS_Quick_ChainContractManagerSaveData::FIGS_Quick_ChainContractManagerSaveData() {
    (*this).ActiveChainsData = TArray<FIGS_Quick_ActiveChainContractData>{};
    (*this).ActiveChainType = EIGS_ChainType::UrbanLegend;
    (*this).LastUsedGenericID = 0;
    (*this).ChainContractResults = TMap<TSubclassOf<UIGS_ChainContractID>, FIGS_Quick_ChainResultsSaveData>{};
    (*this).WasPlayingChainMission = false;
}
