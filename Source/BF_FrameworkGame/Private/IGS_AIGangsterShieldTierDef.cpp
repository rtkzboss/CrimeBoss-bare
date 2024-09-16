#include "IGS_AIGangsterShieldTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIGangsterShieldTierDef::FIGS_AIGangsterShieldTierDef() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Shield");
}
