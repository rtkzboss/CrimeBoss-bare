#include "IGS_NavLinkJump.h"
#include "Components/SceneComponent.h"
#include "IGS_NavLinkJumpComponent.h"

AIGS_NavLinkJump::AIGS_NavLinkJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NavLinkJumpComponent>(TEXT("Link Component"));
    (*this).NavLink = gen;
    auto gen2 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("Root")));
    if (gen) gen->SetupAttachment(gen2);
}

