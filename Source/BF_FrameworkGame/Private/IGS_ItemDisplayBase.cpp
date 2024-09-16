#include "IGS_ItemDisplayBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_BreakableWindowComponent.h"

AIGS_ItemDisplayBase::AIGS_ItemDisplayBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemDisplay"));
    auto gen3 = CreateDefaultSubobject<UIGS_BreakableWindowComponent>(TEXT("BreakableWindow"));
    (*this).RootObject = gen;
    (*this).ItemDisplay = gen2;
    (*this).BreakableWindow = gen3;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
}

void AIGS_ItemDisplayBase::UpdateLoot() {
}


