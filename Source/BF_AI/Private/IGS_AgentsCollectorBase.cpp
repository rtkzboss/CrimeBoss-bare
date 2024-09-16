#include "IGS_AgentsCollectorBase.h"

AIGS_AgentsCollectorBase::AIGS_AgentsCollectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<AIGS_GameCharacterFramework*> AIGS_AgentsCollectorBase::Collect(EIGS_TeamSideEnum TeamSide) const {
    return {};
}

