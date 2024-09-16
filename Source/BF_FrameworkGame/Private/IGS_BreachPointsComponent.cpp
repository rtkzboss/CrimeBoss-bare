#include "IGS_BreachPointsComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_BreachPointComponent.h"

AIGS_BreachPointsComponent::AIGS_BreachPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearEntryPoint"));
    auto gen3 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarEntryPoint"));
    auto gen4 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StackPoint"));
    auto gen5 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearEntryPoint"));
    auto gen6 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarEntryPoint"));
    auto gen7 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftNearExitPoint"));
    auto gen8 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("LeftFarExitPoint"));
    auto gen9 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("StarckExitPoint"));
    auto gen10 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightNearExitPoint"));
    auto gen11 = CreateDefaultSubobject<UIGS_BreachPointComponent>(TEXT("RightFarExitPoint"));
    (*this).BreachingPointsRootComponent = gen;
    (*this).LeftNearEntryPoint = gen2;
    (*this).LeftFarEntryPoint = gen3;
    (*this).MiddleEntryPoint = gen4;
    (*this).RightNearEntryPoint = gen5;
    (*this).RightFarEntryPoint = gen6;
    (*this).LeftNearExitPoint = gen7;
    (*this).LeftFarExitPoint = gen8;
    (*this).MiddleExitPoint = gen9;
    (*this).RightNearExitPoint = gen10;
    (*this).RightFarExitPoint = gen11;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
    if (gen4) gen4->SetupAttachment(gen);
    if (gen5) gen5->SetupAttachment(gen);
    if (gen6) gen6->SetupAttachment(gen);
    if (gen7) gen7->SetupAttachment(gen);
    if (gen8) gen8->SetupAttachment(gen);
    if (gen9) gen9->SetupAttachment(gen);
    if (gen10) gen10->SetupAttachment(gen);
    if (gen11) gen11->SetupAttachment(gen);
}

