#include "IGS_Contract.h"

FIGS_Contract::FIGS_Contract() {
    (*this).ID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).Price = 0.000000000e+00f;
    (*this).ContractPriceMultiplierByRespect = {};
    (*this).UnlockCriteriaTag = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).Missions = {};
}
