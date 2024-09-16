#include "IGS_CoopClimb.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractiveComponent.h"

AIGS_CoopClimb::AIGS_CoopClimb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("CoopClimbInteractiveComponent"));
    auto gen2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    auto gen3 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).CoopClimbInteractiveComponent = gen;
    (*this).CapsuleComponent = gen2;
    (*this).RootComponent = gen3;
    if (gen) gen->SetupAttachment(gen3);
    if (gen2) gen2->SetupAttachment(gen3);
}

void AIGS_CoopClimb::OnUsed(AIGS_GameCharacterFramework* inInstigator) {
}

