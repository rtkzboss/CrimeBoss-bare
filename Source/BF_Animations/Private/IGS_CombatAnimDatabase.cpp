#include "IGS_CombatAnimDatabase.h"

FIGS_CombatAnimDatabase::FIGS_CombatAnimDatabase() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Combat.Unknown"));
    (*this).AnimVariations = {};
    (*this).isLooped = false;
}
