#include "IGS_PropMeshSpawner.h"

UIGS_PropMeshSpawner::UIGS_PropMeshSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bHiddenInGame = true;
}

void UIGS_PropMeshSpawner::Despawn() {
}

