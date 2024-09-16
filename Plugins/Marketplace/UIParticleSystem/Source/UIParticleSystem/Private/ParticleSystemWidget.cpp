#include "ParticleSystemWidget.h"

UParticleSystemWidget::UParticleSystemWidget() {
    (*this).bAutoActivate = true;
}

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset) {
}

UParticleSystemComponent* UParticleSystemWidget::GetParticleComponent() const {
    return nullptr;
}

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset) {
}

