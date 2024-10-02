#include "IGS_DecalImpact.h"
#include "Components/DecalComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SceneComponent.h"

AIGS_DecalImpact::AIGS_DecalImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    (*this).RootDecal = gen;
    (*this).Decal = gen2;
    (*this).PrimaryActorTick.TickGroup = TG_DuringPhysics;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).PrimaryActorTick.TickInterval = 3.330000117e-02f;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

void AIGS_DecalImpact::RemoveAfterTime() {
}

