#include "IGS_ScriptableBehaviorComponent.h"

UIGS_ScriptableBehaviorComponent::UIGS_ScriptableBehaviorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 1.000000015e-01f;
}

void UIGS_ScriptableBehaviorComponent::SetDefendPositionBP(FVector InPosition, float inDistance) {
}

void UIGS_ScriptableBehaviorComponent::SetDefendPoint(AIGS_DefendPointBase* defendPoint) {
}

void UIGS_ScriptableBehaviorComponent::SetDefending(bool NewValue) {
}

bool UIGS_ScriptableBehaviorComponent::GetIsDefending() const {
    return false;
}

TArray<UCoverPoint*> UIGS_ScriptableBehaviorComponent::GetDefendValidCoverPoints() {
    return {};
}

FVector UIGS_ScriptableBehaviorComponent::GetDefendPos() {
    return FVector{};
}

FVector UIGS_ScriptableBehaviorComponent::GetDefendLookAt(FVector querrierLocation) const {
    return FVector{};
}

TArray<UCoverPoint*> UIGS_ScriptableBehaviorComponent::GetDefendCoverPoints() {
    return {};
}

void UIGS_ScriptableBehaviorComponent::ClearDefendPos() {
}

