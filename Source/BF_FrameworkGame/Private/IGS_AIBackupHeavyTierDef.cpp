#include "IGS_AIBackupHeavyTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIBackupHeavyTierDef::FIGS_AIBackupHeavyTierDef() {
    (*this).Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Heavy"));
}
