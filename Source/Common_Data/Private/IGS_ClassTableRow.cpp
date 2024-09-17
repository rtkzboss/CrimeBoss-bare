#include "IGS_ClassTableRow.h"
#include "GameplayTagContainer.h"

FIGS_ClassTableRow::FIGS_ClassTableRow() {
    (*this).ID = nullptr;
    (*this).Data.ClassPerk = FGameplayTag();
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.Image = FSoftObjectPath();
}
