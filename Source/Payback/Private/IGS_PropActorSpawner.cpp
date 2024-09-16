#include "IGS_PropActorSpawner.h"
#include "Engine/EngineTypes.h"

UIGS_PropActorSpawner::UIGS_PropActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Mobility = EComponentMobility::Stationary;
}

bool UIGS_PropActorSpawner::IsSpawned() const {
    return false;
}

AActor* UIGS_PropActorSpawner::GetSpawnedActor() const {
    return nullptr;
}

bool UIGS_PropActorSpawner::Despawn() const {
    return false;
}

