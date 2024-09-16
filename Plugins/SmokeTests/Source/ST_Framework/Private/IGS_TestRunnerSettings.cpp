#include "IGS_TestRunnerSettings.h"

UIGS_TestRunnerSettings::UIGS_TestRunnerSettings() {
    FMapToTestInfo gen;
    gen.FilePath.FilePath = TEXT("/Game/00_Main/Maps/MidHeists/MTR_MoneyTrain/MTR_Root");
    gen.bIsDisabled = false;
    FMapToTestInfo gen2;
    gen2.FilePath.FilePath = TEXT("/Game/00_Main/Maps/MetaGame/CharacterMissions/CM_Clutch/CM_CLU_Mission01/CM_CLU01_Persistent");
    gen2.bIsDisabled = false;
    FMapToTestInfo gen3;
    gen3.FilePath.FilePath = TEXT("/Game/00_Main/Maps/HubGenerator/MVP_Tiles_Performance_Test/HIC_Tiles/PerfTest_MVP_HIC_Tiles_North_01a");
    gen3.bIsDisabled = false;
    (*this).PriorityMapsToTest = {MoveTemp(gen), MoveTemp(gen2), MoveTemp(gen3)};
}

