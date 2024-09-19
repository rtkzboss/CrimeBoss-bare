#include "IGS_TestRunnerSettings.h"

UIGS_TestRunnerSettings::UIGS_TestRunnerSettings() {
    FMapToTestInfo gen;
    gen.FilePath.FilePath = TEXT("/Game/00_Main/Maps/MidHeists/MTR_MoneyTrain/MTR_Root");
    FMapToTestInfo gen2;
    gen2.FilePath.FilePath = TEXT("/Game/00_Main/Maps/MetaGame/CharacterMissions/CM_Clutch/CM_CLU_Mission01/CM_CLU01_Persistent");
    FMapToTestInfo gen3;
    gen3.FilePath.FilePath = TEXT("/Game/00_Main/Maps/HubGenerator/MVP_Tiles_Performance_Test/HIC_Tiles/PerfTest_MVP_HIC_Tiles_North_01a");
    (*this).PriorityMapsToTest = TArray<FMapToTestInfo>{gen, gen2, gen3};
}

