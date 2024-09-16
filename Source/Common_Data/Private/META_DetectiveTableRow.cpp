#include "META_DetectiveTableRow.h"

FMETA_DetectiveTableRow::FMETA_DetectiveTableRow() {
    (*this).ID = nullptr;
    (*this).Name = FText::GetEmpty();
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).UnlockTag, 0)) = NAME_None;
}
