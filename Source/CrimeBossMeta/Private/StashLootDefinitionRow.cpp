#include "StashLootDefinitionRow.h"

FStashLootDefinitionRow::FStashLootDefinitionRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).PayButtonText = FText::GetEmpty();
}
