#include "IGS_MultiplayerJobCategoryRow.h"

FIGS_MultiplayerJobCategoryRow::FIGS_MultiplayerJobCategoryRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).CategoryItemsDataTable = nullptr;
}
