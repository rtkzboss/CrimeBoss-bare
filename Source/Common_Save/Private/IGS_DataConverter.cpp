#include "IGS_DataConverter.h"

UIGS_DataConverter::UIGS_DataConverter() {
}

FMETA_MissionsSave UIGS_DataConverter::ConvertQuickplayMissionsToSave(TArray<UMETA_BaseMission*> inMissions) {
    return FMETA_MissionsSave{};
}

TArray<UMETA_BaseMission*> UIGS_DataConverter::ConvertQuickplayMissionsFromSave(const UObject* inWCO, FMETA_MissionsSave& inMissions) {
    return {};
}

TArray<FMETA_HordeModeMissionSave> UIGS_DataConverter::ConvertHordeModeMissionsToSave(TArray<UMETA_HordeModeMission*> inMissions) {
    return {};
}

TArray<UMETA_HordeModeMission*> UIGS_DataConverter::ConvertHordeModeMissionsFromSave(const UObject* inWCO, TArray<FMETA_HordeModeMissionSave>& inMissions) {
    return {};
}

FMETA_MissionsSave UIGS_DataConverter::ConvertChainMissionsToSave(TArray<UMETA_BaseMission*> inMissions) {
    return FMETA_MissionsSave{};
}

TArray<UMETA_BaseMission*> UIGS_DataConverter::ConvertChainMissionsFromSave(const UObject* inWCO, FMETA_MissionsSave& inMissions) {
    return {};
}

