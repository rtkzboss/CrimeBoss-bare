#include "IGS_CombatAnimDatabase.h"

FIGS_CombatAnimDatabase::FIGS_CombatAnimDatabase() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Combat.Unknown");
    (*this).AnimVariations = {};
    (*this).isLooped = false;
}
