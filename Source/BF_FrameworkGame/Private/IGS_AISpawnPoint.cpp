#include "IGS_AISpawnPoint.h"

AIGS_AISpawnPoint::AIGS_AISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IsActive = true;
    (*this).AutomaticStartDelay = 2.000000030e-01f;
    (*this).TeamSideOverride = EIGS_TeamSideEnum::TS_Unknown;
    (*this).GoToScope = 255;
    (*this).SpawnAnimTag = FGameplayTag::RequestGameplayTag(TEXT("Anim.Spawn.None"));
    (*this).SquadID = -1;
    (*this).CanBeSeen = true;
    (*this).SetHidden(true);
}

void AIGS_AISpawnPoint::SpawnUnitParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization) {
}

void AIGS_AISpawnPoint::SpawnUnit() {
}


