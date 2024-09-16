#include "IGS_TempWaveManagerData.h"
#include "EIGS_TeamSideEnum.h"

UIGS_TempWaveManagerData::UIGS_TempWaveManagerData() {
    (*this).AssaultTime = 1.800000000e+02f;
    (*this).ControlTime = 1.800000000e+02f;
    (*this).CoolDownTime = 1.000000000e+01f;
    (*this).BuildUpTime = 1.000000000e+01f;
    (*this).StartOnAlarm = true;
    (*this).TimeAfterAlarm = 3.000000000e+01f;
    (*this).TimeBetweenWaves = 6.000000000e+01f;
    (*this).InitEnemyCount = 2;
    (*this).IncrementPerWave = 1;
    (*this).MaxSquadSize = 4;
    (*this).IncreasingWaveCount = 5;
    (*this).TotalLimit = 8;
    (*this).TotalLimitThreshold = 5.000000000e-01f;
    (*this).LargeGroup = 10;
    FIGS_WaveHolder gen;
    gen.TeamSide = EIGS_TeamSideEnum::TS_SWAT;
    gen.Amount = 1;
    gen.Random = 0;
    (*this).WaveHolders = {MoveTemp(gen)};
}

