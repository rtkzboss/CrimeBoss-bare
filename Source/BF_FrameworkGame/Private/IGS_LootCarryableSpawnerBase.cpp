#include "IGS_LootCarryableSpawnerBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_LootCarryableSpawnerBase::AIGS_LootCarryableSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    auto gen2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPlaceholder"));
    (*this).Scene = gen;
    (*this).SpawnPlaceholder = gen2;
    (*this).ActorToSpawn = FSoftObjectPath();
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

void AIGS_LootCarryableSpawnerBase::LootCarryableSpawned(AIGS_StaticMeshInventoryItemPickup* inPickup) {
}

