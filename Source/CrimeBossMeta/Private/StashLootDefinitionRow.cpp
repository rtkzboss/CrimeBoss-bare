#include "StashLootDefinitionRow.h"

FStashLootDefinitionRow::FStashLootDefinitionRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).PayButtonText = FText::GetEmpty();
}
