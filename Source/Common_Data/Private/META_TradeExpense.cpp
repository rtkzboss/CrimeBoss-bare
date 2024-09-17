#include "META_TradeExpense.h"

FMETA_TradeExpense::FMETA_TradeExpense() {
    (*this).ExpenseType = EMETA_TradeExpenseType::Money;
    (*this).LootCategory = FGameplayTag();
    (*this).EconomyVariable = FGameplayTag();
    (*this).GraphVariable = FGameplayTag();
    (*this).Alternative = false;
}
