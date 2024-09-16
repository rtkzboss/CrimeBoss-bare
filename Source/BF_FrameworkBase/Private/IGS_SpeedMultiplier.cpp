#include "IGS_SpeedMultiplier.h"

FIGS_SpeedMultiplier::FIGS_SpeedMultiplier() {
    (*this).Owner = nullptr;
    auto gen = TBaseStructure<FActiveGameplayEffectHandle>::Get()->FindPropertyByName("Handle");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).ActiveGEHandle, 0)) = -1;
    auto gen2 = TBaseStructure<FActiveGameplayEffectHandle>::Get()->FindPropertyByName("bPassedFiltersAndWasExecuted");
    (*gen2->ContainerPtrToValuePtr<bool>(&(*this).ActiveGEHandle, 0)) = false;
}
