#include "IGS_CoverPointBase.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointBase::AIGS_CoverPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).IsActive = true;
    (*this).Radius = 3.500000000e+01f;
    (*this).ShowSideSteps = true;
    (*this).ShowStanding = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen;
}

