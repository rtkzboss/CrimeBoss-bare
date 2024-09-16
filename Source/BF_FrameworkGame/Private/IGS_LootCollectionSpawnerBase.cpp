#include "IGS_LootCollectionSpawnerBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_LootCollectionSpawnerBase::AIGS_LootCollectionSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    auto gen2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPlaceholder"));
    (*this).Scene = gen;
    (*this).SpawnPlaceholder = gen2;
    (*this).ActorToSpawn = FSoftObjectPath();
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

void AIGS_LootCollectionSpawnerBase::LootCollectionSpawned(AIGS_LootCollectionBase* inLootCollection) {
}

