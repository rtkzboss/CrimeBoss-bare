#include "IGS_PropLogicComponentBase.h"
#include "Engine/EngineTypes.h"

UIGS_PropLogicComponentBase::UIGS_PropLogicComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Mobility = EComponentMobility::Stationary;
}

