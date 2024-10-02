#include "META_HordeModeMission.h"
#include "Templates/SubclassOf.h"

UMETA_HordeModeMission::UMETA_HordeModeMission() {
}

void UMETA_HordeModeMission::SetDataFromSave(const FMETA_HordeModeMissionSave& inHordeModeMissionSave) {
}

FMETA_HordeModeMissionSave UMETA_HordeModeMission::GetSaveData() const {
    return FMETA_HordeModeMissionSave{};
}

int32 UMETA_HordeModeMission::GetPlayersCount() const {
    return 0;
}

TMap<TSubclassOf<UGameplayEffect>, float> UMETA_HordeModeMission::GetPerkUpgrades() const {
    return {};
}

int32 UMETA_HordeModeMission::GetMoney() const {
    return 0;
}

int32 UMETA_HordeModeMission::GetMaxWaveCount() const {
    return 0;
}

int32 UMETA_HordeModeMission::GetKillsCount() const {
    return 0;
}

FMETA_FPSMissionRowInfo UMETA_HordeModeMission::GetInfo() const {
    return FMETA_FPSMissionRowInfo{};
}

int32 UMETA_HordeModeMission::GetHeisterMoney() const {
    return 0;
}

FDateTime UMETA_HordeModeMission::GetDateTime() const {
    return FDateTime{};
}

int32 UMETA_HordeModeMission::GetCompletedWave() const {
    return 0;
}

