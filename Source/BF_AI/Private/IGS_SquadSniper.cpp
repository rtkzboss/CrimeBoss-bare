#include "IGS_SquadSniper.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SquadSniper::AIGS_SquadSniper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DebugColor.G = 0;
    (*this).DebugColor.R = 129;
}


