#include "IGS_SimpleProjectile.h"
#include "Components/SphereComponent.h"

AIGS_SimpleProjectile::AIGS_SimpleProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    (*this).Collision = gen;
    (*this).RootComponent = gen;
}

