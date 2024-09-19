#include "IGS_SpawnDefHolder.h"

FIGS_SpawnDefHolder::FIGS_SpawnDefHolder() {
    (*this).SpawnGroups = TArray<TWeakObjectPtr<AIGS_AIEnemyGroupSpawner>>{};
    (*this).DefendTags = FGameplayTagContainer();
}
