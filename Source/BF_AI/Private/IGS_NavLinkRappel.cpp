#include "IGS_NavLinkRappel.h"
#include "Components/SceneComponent.h"
#include "IGS_NavLinkRappelComponent.h"

AIGS_NavLinkRappel::AIGS_NavLinkRappel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NavLinkRappelComponent>(TEXT("Link Component"));
    (*this).EndTransitionDistance = 3.500000000e+01f;
    (*this).DisableRopeUpdateDelay = 3.000000000e+00f;
    (*this).FallingSpeed = 2.500000000e+02f;
    (*this).RopeSpawnOffset.Z = 1.250000000e+02f;
    (*this).NavLink = gen;
    auto gen2 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("Root")));
    if (gen) gen->SetupAttachment(gen2);
}

