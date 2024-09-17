#include "IGS_StaticMeshPenetrableActor.h"
#include "IGS_MeshOverlappableComponent.h"

AIGS_StaticMeshPenetrableActor::AIGS_StaticMeshPenetrableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_MeshOverlappableComponent>(TEXT("MeshOverlappableComponent0"));
    (*this).MeshOverlappableComponent = gen;
    (*this).SetCanBeDamaged(false);
    (*this).RootComponent = gen;
}

void AIGS_StaticMeshPenetrableActor::SetMobility(EComponentMobility::Type inMobility) {
}

