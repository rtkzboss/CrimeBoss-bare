#include "IGS_DoorsBreachPoints.h"
#include "Components/SceneComponent.h"
#include "IGS_BreachPointComponent.h"

AIGS_DoorsBreachPoints::AIGS_DoorsBreachPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearEntryPoint"));
    auto gen2 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarEntryPoint"));
    auto gen3 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("MiddleEntryPoint"));
    auto gen4 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearEntryPoint"));
    auto gen5 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarEntryPoint"));
    auto gen6 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearExitPoint"));
    auto gen7 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarExitPoint"));
    auto gen8 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("MiddleExitPoint"));
    auto gen9 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearExitPoint"));
    auto gen10 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarExitPoint"));
    (*this).LeftNearEntryPoint = gen;
    (*this).LeftFarEntryPoint = gen2;
    (*this).MiddleEntryPoint = gen3;
    (*this).RightNearEntryPoint = gen4;
    (*this).RightFarEntryPoint = gen5;
    (*this).LeftNearExitPoint = gen6;
    (*this).LeftFarExitPoint = gen7;
    (*this).MiddleExitPoint = gen8;
    (*this).RightNearExitPoint = gen9;
    (*this).RightFarExitPoint = gen10;
    auto gen11 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("RootComponent")));
    if (gen) gen->SetupAttachment(gen11);
    if (gen2) gen2->SetupAttachment(gen11);
    if (gen3) gen3->SetupAttachment(gen11);
    if (gen4) gen4->SetupAttachment(gen11);
    if (gen5) gen5->SetupAttachment(gen11);
    if (gen6) gen6->SetupAttachment(gen11);
    if (gen7) gen7->SetupAttachment(gen11);
    if (gen8) gen8->SetupAttachment(gen11);
    if (gen9) gen9->SetupAttachment(gen11);
    if (gen10) gen10->SetupAttachment(gen11);
}

