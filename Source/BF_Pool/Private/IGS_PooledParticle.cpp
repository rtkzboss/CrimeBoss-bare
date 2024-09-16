#include "IGS_PooledParticle.h"
#include "Particles/ParticleSystemComponent.h"

AIGS_PooledParticle::AIGS_PooledParticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    (*this).ParticleComponent = gen;
    (*this).RootComponent = gen;
}

void AIGS_PooledParticle::OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent) {
}

