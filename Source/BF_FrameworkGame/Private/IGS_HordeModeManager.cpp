#include "IGS_HordeModeManager.h"
#include "Net/UnrealNetwork.h"

UIGS_HordeModeManager::UIGS_HordeModeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).SetIsReplicatedByDefault(true);
}

void UIGS_HordeModeManager::SetHordeModeCurrentWave(const UObject* inWCO, int32 inWave) {
}

void UIGS_HordeModeManager::SetHordeModeCounterValues(const UObject* inWCO, int32 inTotalValue, float inCurrentProgress) {
}

void UIGS_HordeModeManager::SetHordeModeCompletedWave(const UObject* inWCO, int32 inWave) {
}

void UIGS_HordeModeManager::SetHordeModeActive(const UObject* inWCO, bool Inactive) {
}

void UIGS_HordeModeManager::OnRep_TotalEarnedTokens(int32 inOldTotalEarnedTokens) {
}

void UIGS_HordeModeManager::OnRep_HordeModeValues(FIGS_HordeModeValues inOldValues) {
}

void UIGS_HordeModeManager::OnRep_HordeModeActive(bool inOldHordeModeActive) {
}

void UIGS_HordeModeManager::OnRep_CurrenWave(int32 inOldWave) {
}

void UIGS_HordeModeManager::OnRep_CompletedWave(int32 inOldWave) {
}

void UIGS_HordeModeManager::OnFPS2MetaDataRequested(FIGS_SharedMetaTransfer_Data& refSharedData, FIGS_FPS2Meta_Data& refFPSData) const {
}

UIGS_HordeModeManager* UIGS_HordeModeManager::Instance(const UObject* inWorldContextObject) {
    return nullptr;
}

UIGS_HordeModeSettings* UIGS_HordeModeManager::GetSettings() const {
    return nullptr;
}

int32 UIGS_HordeModeManager::GetHordeModeTotalEarnedTokens(const UObject* inWCO) {
    return 0;
}

UIGS_HordeModeManager* UIGS_HordeModeManager::GetHordeModeManager(const UObject* inWCO) {
    return nullptr;
}

void UIGS_HordeModeManager::AddTokensToAllPlayers(const UObject* inWCO, int32 inTokensCount) {
}

void UIGS_HordeModeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_HordeModeManager, bIsHordeModeActive);
    DOREPLIFETIME(UIGS_HordeModeManager, HordeModeValues);
    DOREPLIFETIME(UIGS_HordeModeManager, CurrentWave);
    DOREPLIFETIME(UIGS_HordeModeManager, CompletedWave);
    DOREPLIFETIME(UIGS_HordeModeManager, TotalEarnedTokens);
}

