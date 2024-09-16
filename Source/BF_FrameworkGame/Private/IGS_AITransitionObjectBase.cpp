#include "IGS_AITransitionObjectBase.h"
#include "IGS_GetActorByGameplayTagComponent.h"

AIGS_AITransitionObjectBase::AIGS_AITransitionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_GetActorByGameplayTagComponent>(TEXT("GetActorByGameplayTagComponent"));
    (*this).m_GetActorByGameplayTagComponent = gen;
}

void AIGS_AITransitionObjectBase::SetupNavlink(UBoxComponent* helpersBox) const {
}

void AIGS_AITransitionObjectBase::SetNavlinkLinkEnabled(bool InValue) {
}

