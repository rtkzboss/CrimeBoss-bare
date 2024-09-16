#include "IGS_StaticMeshPenetrableActor.h"
#include "IGS_MeshOverlappableComponent.h"

AIGS_StaticMeshPenetrableActor::AIGS_StaticMeshPenetrableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_MeshOverlappableComponent>(TEXT("MeshOverlappableComponent0"));
    (*this).MeshOverlappableComponent = gen;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("bCanBeDamaged");
    CastField<FBoolProperty>(gen2)->SetPropertyValue(&(*gen2->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
    (*this).RootComponent = gen;
}

void AIGS_StaticMeshPenetrableActor::SetMobility(TEnumAsByte<EComponentMobility::Type> inMobility) {
}

