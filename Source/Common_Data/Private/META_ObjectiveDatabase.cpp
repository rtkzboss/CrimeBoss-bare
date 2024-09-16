#include "META_ObjectiveDatabase.h"

UMETA_ObjectiveDatabase::UMETA_ObjectiveDatabase() {
}

void UMETA_ObjectiveDatabase::SetObjectiveByID(FGameplayTag inObjectiveID, FMETA_ObjectiveRewardData inObjectiveReward, UMETA_BaseFPSMission* inMission) {
}

TArray<FMETA_ObjectivePresetTableRow> UMETA_ObjectiveDatabase::GetPresetsDatabaseTable() {
    return {};
}

FMETA_ObjectivePresetTableRow UMETA_ObjectiveDatabase::GetPresetDataBP(const UObject* inWCO, FGameplayTag inID, bool& outSucceeded) {
    return FMETA_ObjectivePresetTableRow{};
}

TArray<FMETA_ObjectiveTableRow> UMETA_ObjectiveDatabase::GetObjectivesDatabaseTable() {
    return {};
}

FMETA_ObjectiveTableRow UMETA_ObjectiveDatabase::GetObjectiveDataBP(const UObject* inWCO, FGameplayTag inID, bool& outSucceeded) {
    return FMETA_ObjectiveTableRow{};
}

