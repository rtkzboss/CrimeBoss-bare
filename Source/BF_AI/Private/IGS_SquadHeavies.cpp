#include "IGS_SquadHeavies.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadHeavies::AIGS_SquadHeavies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.B = 75;
    (*this).DebugColor.R = 255;
}


