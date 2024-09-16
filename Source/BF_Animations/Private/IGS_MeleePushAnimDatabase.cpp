#include "IGS_MeleePushAnimDatabase.h"

FIGS_MeleePushAnimDatabase::FIGS_MeleePushAnimDatabase() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Push.Unknown");
    (*this).AnimVariations = {};
}
