#include "IGS_WalkieTalkie.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_InteractiveComponent.h"

AIGS_WalkieTalkie::AIGS_WalkieTalkie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("RootComp"))) {
    auto gen = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    (*this).InteractiveComponent = gen;
    auto gen2 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("RootComp")));
    (*this).PickupMeshComp = gen2;
    (*this).SceneRoot = gen2;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}


