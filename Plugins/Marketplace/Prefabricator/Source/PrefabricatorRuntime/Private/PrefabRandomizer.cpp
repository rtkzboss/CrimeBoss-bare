#include "PrefabRandomizer.h"
#include "Components/SceneComponent.h"

APrefabRandomizer::APrefabRandomizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    (*this).MaxBuildTimePerFrame = 1.999999955e-02f;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen;
}

void APrefabRandomizer::Randomize(int32 InSeed) {
}

