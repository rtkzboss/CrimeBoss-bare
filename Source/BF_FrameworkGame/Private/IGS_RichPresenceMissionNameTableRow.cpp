#include "IGS_RichPresenceMissionNameTableRow.h"

FIGS_RichPresenceMissionNameTableRow::FIGS_RichPresenceMissionNameTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
}
