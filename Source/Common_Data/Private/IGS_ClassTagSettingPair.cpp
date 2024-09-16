#include "IGS_ClassTagSettingPair.h"

FIGS_ClassTagSettingPair::FIGS_ClassTagSettingPair() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ClassTag, 0)) = NAME_None;
    (*this).Settings = nullptr;
}
