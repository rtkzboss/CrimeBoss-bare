#include "IGS_InteractableDefendPointBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_InteractableDefendPointBase::AIGS_InteractableDefendPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Defend Interaction"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    auto gen3 = CreateDefaultSubobject<UBoxComponent>(TEXT("Defend Trigger"));
    (*this).DefendInteraction = gen;
    (*this).RootComp = gen2;
    (*this).LeaveTrigger = gen3;
    (*this).DefendTime = 1.000000000e+01f;
    (*this).bIsTimed = true;
    (*this).ResetCountdown = 1.000000000e+01f;
    (*this).DelayAfterAllPlayersOut = 1.000000000e+01f;
    (*this).mR_bPinged = true;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
    if (gen3) gen3->SetupAttachment(gen2);
}

void AIGS_InteractableDefendPointBase::SetPinged(bool inPinged) {
}

void AIGS_InteractableDefendPointBase::SetActiveDefend(bool inIsActive) {
}

void AIGS_InteractableDefendPointBase::OnRep_Pinged() {
}

void AIGS_InteractableDefendPointBase::OnPlayerCountChanged_Implementation(int32 inCount) {
}



void AIGS_InteractableDefendPointBase::OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}



void AIGS_InteractableDefendPointBase::OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

float AIGS_InteractableDefendPointBase::GetDefendTimeRemaining() {
    return 0.000000000e+00f;
}

float AIGS_InteractableDefendPointBase::GetDefendTimeElapsed() {
    return 0.000000000e+00f;
}

void AIGS_InteractableDefendPointBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_InteractableDefendPointBase, mR_bPinged);
}

