#include "IGS_SquadGuardians.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadGuardians::AIGS_SquadGuardians(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 193;
    (*this).DebugColor.G = 255;
    (*this).DebugColor.R = 0;
}


