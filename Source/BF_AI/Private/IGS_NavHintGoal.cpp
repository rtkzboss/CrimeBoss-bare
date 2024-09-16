#include "IGS_NavHintGoal.h"
#include "Components/SceneComponent.h"

AIGS_NavHintGoal::AIGS_NavHintGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen;
}

