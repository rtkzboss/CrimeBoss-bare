#include "IGS_NavLinkBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_NavLinkBase::AIGS_NavLinkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).helpersBox = gen;
    (*this).Left.X = -1.000000000e+02f;
    (*this).Right.X = 1.000000000e+02f;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

void AIGS_NavLinkBase::OnNavlinkTransitionStarted(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight) {
}

void AIGS_NavLinkBase::OnNavlinkComponentReached(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight) {
}

void AIGS_NavLinkBase::OnNavlinkComponentLeft(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn) {
}

