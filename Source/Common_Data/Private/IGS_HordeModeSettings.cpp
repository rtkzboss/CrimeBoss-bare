#include "IGS_HordeModeSettings.h"

UIGS_HordeModeSettings::UIGS_HordeModeSettings() {
    (*this).MaxWave = 15;
    (*this).SwatSpawnOnWave = 11;
    (*this).ScudosSpawnOnWave = 6;
    (*this).MaxSavedMissions = 10;
    (*this).UpgradesTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/SmallHits/HOR_HordeMode/Upgrades/DT_HOR_PerkUpgrades.DT_HOR_PerkUpgrades"), TEXT(""));
}

