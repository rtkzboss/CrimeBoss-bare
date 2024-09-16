#include "IGS_CoverPointsDataActor.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointsDataActor::AIGS_CoverPointsDataActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).RootComponent = gen;
}

