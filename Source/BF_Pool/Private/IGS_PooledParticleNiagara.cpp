#include "IGS_PooledParticleNiagara.h"
#include "NiagaraComponent.h"

AIGS_PooledParticleNiagara::AIGS_PooledParticleNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    (*this).NiagaraComponent = gen;
    (*this).RootComponent = gen;
}

void AIGS_PooledParticleNiagara::SetTemplate(UNiagaraSystem* inNewTemplate) const {
}

void AIGS_PooledParticleNiagara::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}

