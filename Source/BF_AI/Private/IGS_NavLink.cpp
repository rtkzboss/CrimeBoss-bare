#include "IGS_NavLink.h"
#include "Components/SceneComponent.h"
#include "IGS_NavLinkComponent.h"

AIGS_NavLink::AIGS_NavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NavLinkComponent>(TEXT("Link Component"));
    (*this).LinkComponent = gen;
    (*this).NavLink = gen;
    auto gen2 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("Root")));
    if (gen) gen->SetupAttachment(gen2);
}

