#include "META_HordeModeMissionSave.h"
#include "Templates/SubclassOf.h"

FMETA_HordeModeMissionSave::FMETA_HordeModeMissionSave() {
    (*this).PerkUpgrades = TMap<TSubclassOf<UGameplayEffect>, float>{};
    (*this).KillsCount = 0;
    (*this).CompletedWave = 0;
    (*this).MaxWaveCount = 0;
    (*this).Money = 0;
    (*this).HeisterMoney = 0;
    (*this).PlayersCount = 0;
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
}
