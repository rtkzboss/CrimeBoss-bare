#include "IGS_BreachExplodable.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_BreachExplodable::AIGS_BreachExplodable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).ExplosionDelay = 2.000000000e+00f;
    (*this).StaticMeshComponent = gen;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}


