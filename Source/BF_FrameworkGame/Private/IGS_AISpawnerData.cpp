#include "IGS_AISpawnerData.h"
#include "IGS_AIDatabaseFPS.h"

UIGS_AISpawnerData::UIGS_AISpawnerData() {
    (*this).GroupEnvironmentQuery = FSoftObjectPath();
    (*this).SniperGroupEnvironmentQuery = FSoftObjectPath();
    (*this).GroupAroundActorEnvironmentQuery = FSoftObjectPath();
    (*this).GuardEnvironmentQuery = FSoftObjectPath();
    (*this).CivilianEnvironmentQuery = FSoftObjectPath();
    (*this).CivilianGroupQuery = FSoftObjectPath();
    (*this).CoverEnvironmentQuery = FSoftObjectPath();
    (*this).HideMeshOnSpawnDuration = 1.000000015e-01f;
    (*this).VIPSpawnPoint = FSoftObjectPath();
    (*this).BotController = FSoftObjectPath();
    static ConstructorHelpers::FObjectFinder<UIGS_AIDatabaseFPS> gen(TEXT("/Game/00_Main/Core/AI/Settings/DA_AI_Database_FPS.DA_AI_Database_FPS"));
    (*this).AIDatabaseFPS = gen.Object;
}

