#include "IGS_AISwatHeavyScoutTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AISwatHeavyScoutTierDef::FIGS_AISwatHeavyScoutTierDef() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Scout.Heavy");
}
