#include "QuickMissionsDatabase.h"
#include "Templates/SubclassOf.h"

UQuickMissionsDatabase::UQuickMissionsDatabase() {
}

TSubclassOf<UMETA_MissionID> UQuickMissionsDatabase::GetRandomMissionIDForScenarios(FGameplayTagContainer inScenarioTags, bool& outSucceeded) {
    return nullptr;
}

UMETA_BaseMission* UQuickMissionsDatabase::GetQuickMissionObject(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID) {
    return nullptr;
}

FMETA_MissionDatabase UQuickMissionsDatabase::GetQuickMissionDataBP(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inClass, bool& outSucceeded) {
    return FMETA_MissionDatabase{};
}

TArray<TSubclassOf<UMETA_MissionID>> UQuickMissionsDatabase::GetMoneyMakingQuickMissionIDsWithLootTypeByUnlockRespect(const UObject* inWCO, FGameplayTag inLootType, EMETA_RespectLvl inUnlockRespect) {
    return {};
}

TArray<TSubclassOf<UMETA_MissionID>> UQuickMissionsDatabase::GetFpsMissionsIdsWithSubType(EMETA_FPSMissionSubtype inFPSMissionSubtype) {
    return {};
}

FMETA_FPSMissionInfo UQuickMissionsDatabase::GetFPSMissionInfoBP(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded) {
    return FMETA_FPSMissionInfo{};
}

