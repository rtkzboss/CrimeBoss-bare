#include "META_TradeExpense.h"

FMETA_TradeExpense::FMETA_TradeExpense() {
    (*this).ExpenseType = EMETA_TradeExpenseType::Money;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootCategory, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EconomyVariable, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).GraphVariable, 0)) = NAME_None;
    (*this).Alternative = false;
}
