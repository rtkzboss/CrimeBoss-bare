#include "IGS_ProjectileWithMovementWithEffect.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"

AIGS_ProjectileWithMovementWithEffect::AIGS_ProjectileWithMovementWithEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle System Movement"));
    auto gen2 = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component Movement"));
    (*this).ParticleSystemMovement = gen;
    (*this).AudioComponentMovement = gen2;
}

void AIGS_ProjectileWithMovementWithEffect::OnParticleMovementFinished(UParticleSystemComponent* inParticleSystemComponent) {
}

