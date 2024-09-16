#include "IGS_SuspicionActorBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_SuspicionComponent.h"

AIGS_SuspicionActorBase::AIGS_SuspicionActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SuspicionComponent>(TEXT("SuspicionComponent"));
    auto gen2 = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
    auto gen3 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    (*this).SuspicionComponent = gen;
    (*this).Root = gen2;
    (*this).SceneRoot = gen3;
    (*this).TeamSide = EIGS_TeamSideEnum::TS_StimuliEvent;
    (*this).LifetimeStartTime = -1.000000000e+00f;
    (*this).LifeTime = -1.000000000e+00f;
    (*this).NoticedLifetime = -1.000000000e+00f;
    (*this).IsValidForAmbient = true;
    (*this).RootComponent = gen3;
    if (gen2) gen2->SetupAttachment(gen3);
}

void AIGS_SuspicionActorBase::SetTeamID(EIGS_TeamSideEnum inTeamID) {
}

void AIGS_SuspicionActorBase::SetSuspicionLifeTimeEnded() {
}



UIGS_SuspicionComponent* AIGS_SuspicionActorBase::GetSuspicionComponent() const {
    return nullptr;
}

AIGS_GameCharacterFramework* AIGS_SuspicionActorBase::GetOwningCharacter() const {
    return nullptr;
}

