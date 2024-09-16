#include "IGS_NavLinkWalkThrough.h"
#include "Components/SceneComponent.h"
#include "IGS_NavLinkWalkThroughComponent.h"

AIGS_NavLinkWalkThrough::AIGS_NavLinkWalkThrough(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NavLinkWalkThroughComponent>(TEXT("Link Component"));
    (*this).NavLink = gen;
    auto gen2 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("Root")));
    if (gen) gen->SetupAttachment(gen2);
}

