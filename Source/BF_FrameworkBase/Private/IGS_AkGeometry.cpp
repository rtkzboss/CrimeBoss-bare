#include "IGS_AkGeometry.h"
#include "AkGeometryComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_AkGeometry::AIGS_AkGeometry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    auto gen2 = CreateDefaultSubobject<UAkGeometryComponent>(TEXT("AkGeometryComponent"));
    (*this).StaticMeshComponent = gen;
    (*this).AkGeometry = gen2;
    (*this).RootComponent = gen;
}

