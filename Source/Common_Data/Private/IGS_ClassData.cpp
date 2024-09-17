#include "IGS_ClassData.h"

FIGS_ClassData::FIGS_ClassData() {
    (*this).ClassPerk = FGameplayTag();
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).Image = FSoftObjectPath();
}
