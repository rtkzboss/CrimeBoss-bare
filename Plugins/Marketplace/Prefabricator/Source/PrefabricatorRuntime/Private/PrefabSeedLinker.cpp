#include "PrefabSeedLinker.h"
#include "PrefabSeedLinkerComponent.h"

APrefabSeedLinker::APrefabSeedLinker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPrefabSeedLinkerComponent>(TEXT("SeedLinker"));
    (*this).SeedLinkerComponent = gen;
    (*this).RootComponent = gen;
}

