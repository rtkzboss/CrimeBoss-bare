#include "IGS_LensFlareBase.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AIGS_LensFlareBase::AIGS_LensFlareBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    auto gen2 = CreateDefaultSubobject<USphereComponent>(TEXT("SourceBoundsComponent"));
    (*this).SceneComponent = gen;
    (*this).SourceBounds = gen2;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}


