#include "IGS_SquadShielder.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadShielder::AIGS_SquadShielder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 0;
    (*this).DebugColor.G = 255;
    (*this).DebugColor.R = 252;
}


