#include "IGS_ProgressionBonus.h"

FIGS_ProgressionBonus::FIGS_ProgressionBonus() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BonusTag, 0)) = NAME_None;
    (*this).Value = 0;
}
