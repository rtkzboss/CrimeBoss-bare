#include "IGS_AISpawner.h"
#include "IGS_AISpawnerData.h"

UIGS_AISpawner::UIGS_AISpawner() {
    static ConstructorHelpers::FObjectFinder<UIGS_AISpawnerData> gen(TEXT("/Game/00_Main/Core/AI/Spawning/DA_AISpawnerData.DA_AISpawnerData"));
    (*this).AISpawnerData = gen.Object;
    (*this).NoneSpawnAnimTag = FGameplayTag::RequestGameplayTag(TEXT("Anim.Spawn.None"));
    (*this).StoryMissionTag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Story"));
    (*this).UnknownMissionTag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Unknown"));
    (*this).NoSpecialTierTag = FGameplayTag::RequestGameplayTag(TEXT("Point.Spawn.Init.Disallow.Tier.Special"));
    (*this).ForceSpecialTierTag = FGameplayTag::RequestGameplayTag(TEXT("Point.Spawn.Init.Force.Tier.Special"));
}

void UIGS_AISpawner::SpawnUnitFromBlueprint(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization, FTransform InTransform, int32 inCount, EIGS_SpawnAnimType inSpawnAnim) {
}

