#include "IGS_SquadHeavies.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadHeavies::AIGS_SquadHeavies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 255;
    (*this).DebugColor.G = 163;
    (*this).DebugColor.R = 0;
}


