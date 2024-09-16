#include "IGS_AIBackupHeavyTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIBackupHeavyTierDef::FIGS_AIBackupHeavyTierDef() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
}
