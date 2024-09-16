#include "IGS_ClassData.h"

FIGS_ClassData::FIGS_ClassData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ClassPerk, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).Image = FSoftObjectPath();
}
