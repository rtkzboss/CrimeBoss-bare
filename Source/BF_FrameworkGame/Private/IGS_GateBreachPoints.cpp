#include "IGS_GateBreachPoints.h"
#include "Components/SceneComponent.h"
#include "IGS_BreachPointComponent.h"

AIGS_GateBreachPoints::AIGS_GateBreachPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackEntryPoint"));
    auto gen2 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("BreachEntryPoint"));
    auto gen3 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackExitPoint"));
    (*this).StackEntryPoint = gen;
    (*this).BreachEntryPoint = gen2;
    (*this).StackExitPoint = gen3;
    auto gen4 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("RootComponent")));
    if (gen) gen->SetupAttachment(gen4);
    if (gen2) gen2->SetupAttachment(gen4);
    if (gen3) gen3->SetupAttachment(gen4);
}

