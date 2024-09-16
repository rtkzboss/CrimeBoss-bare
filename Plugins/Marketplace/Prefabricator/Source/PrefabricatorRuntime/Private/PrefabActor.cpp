#include "PrefabActor.h"
#include "PrefabComponent.h"

APrefabActor::APrefabActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
    (*this).PrefabComponent = gen;
    (*this).RootComponent = gen;
}

void APrefabActor::SavePrefab() {
}

void APrefabActor::RandomizeSeed(const FRandomStream& InRandom, bool bRecursive) {
}

void APrefabActor::LoadPrefab() {
}

bool APrefabActor::IsPrefabOutdated() {
    return false;
}

UPrefabricatorAsset* APrefabActor::GetPrefabAsset() {
    return nullptr;
}

