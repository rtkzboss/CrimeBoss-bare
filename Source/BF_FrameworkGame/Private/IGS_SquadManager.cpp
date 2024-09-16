#include "IGS_SquadManager.h"
#include "IGS_SquadClassesHolder.h"

UIGS_SquadManager::UIGS_SquadManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_SquadClassesHolder> gen(TEXT("/Game/00_Main/Core/AI/Squads/DA_SquadClassesHolder.DA_SquadClassesHolder"));
    (*this).SquadClassesHolder = gen.Object;
}

UIGS_SquadManager* UIGS_SquadManager::Instance(const UObject* inWCO) {
    return nullptr;
}

AIGS_SquadFramework* UIGS_SquadManager::GetSquadFromID(int32 inSquadID) {
    return nullptr;
}

AIGS_SquadFramework* UIGS_SquadManager::AddSquad(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inSpecialization) {
    return nullptr;
}

