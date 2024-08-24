#include "IGS_SquadHeistersBackup.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadHeistersBackup::AIGS_SquadHeistersBackup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 255;
    (*this).DebugColor.G = 200;
    (*this).DebugColor.R = 0;
}


