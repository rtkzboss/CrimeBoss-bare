#include "IGS_ParticleImpact.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_ParticleImpact::AIGS_ParticleImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    auto gen3 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    (*this).SceneComponent = gen;
    (*this).ParticleComponent = gen2;
    (*this).NiagaraComponent = gen3;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
}

void AIGS_ParticleImpact::OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent) {
}

void AIGS_ParticleImpact::OnNiagaraSystemFinished(UNiagaraComponent* inNiagaraComponent) {
}

