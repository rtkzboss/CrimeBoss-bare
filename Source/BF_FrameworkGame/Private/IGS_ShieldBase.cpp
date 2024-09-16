#include "IGS_ShieldBase.h"
#include "Components/StaticMeshComponent.h"

AIGS_ShieldBase::AIGS_ShieldBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
    (*this).ShieldMeshComponent = gen;
}


