#include "META_TutorialTextTableRow.h"

FMETA_TutorialTextTableRow::FMETA_TutorialTextTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Text = FText::GetEmpty();
}
