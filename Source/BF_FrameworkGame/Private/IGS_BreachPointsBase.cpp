#include "IGS_BreachPointsBase.h"
#include "Components/SceneComponent.h"

AIGS_BreachPointsBase::AIGS_BreachPointsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).BreachingPointsRootComponent = gen;
    (*this).RootComponent = gen;
}

