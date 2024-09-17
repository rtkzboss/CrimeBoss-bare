#include "IGS_IdlePoint.h"
#include "GameplayTagContainer.h"

AIGS_IdlePoint::AIGS_IdlePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MinTimeUntilBreaker = 1.500000000e+01f;
    (*this).MaxTimeUntilBreaker = 6.000000000e+01f;
    (*this).MinWaitTime = 6.000000000e+01f;
    (*this).MaxWaitTime = 1.200000000e+02f;
    (*this).AnimationsToPlayTag = FGameplayTag::RequestGameplayTag(TEXT("Anim.Patrol.IdleBreaker")).GetSingleTagContainer();
}

