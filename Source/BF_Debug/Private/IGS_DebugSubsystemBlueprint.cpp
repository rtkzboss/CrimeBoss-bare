#include "IGS_DebugSubsystemBlueprint.h"

UIGS_DebugSubsystemBlueprint::UIGS_DebugSubsystemBlueprint() {
    (*this).DebugMenuClass = FSoftObjectPath();
    (*this).SWATClass = FSoftObjectPath();
    (*this).HeisterClass = FSoftObjectPath();
    (*this).DamageNumbersWidgetClass = FSoftObjectPath();
    (*this).FearNumbersWidgetClass = FSoftObjectPath();
    (*this).AmmoClassLarge = FSoftObjectPath();
    (*this).AmmoClassSmall = FSoftObjectPath();
    (*this).SpawnTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).SpawnMaxDistance = 1.000000000e+05f;
    (*this).SpawnMinChokePoints = 1;
    (*this).SpawnMaxChokePoints = 1;
}






