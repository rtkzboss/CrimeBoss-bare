#include "IGS_MenuBackgroundTableRow.h"

FIGS_MenuBackgroundTableRow::FIGS_MenuBackgroundTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Priority = 0;
    (*this).Name = FText::GetEmpty();
    (*this).Condition = nullptr;
}
