#include "IGS_Contract.h"
#include "Templates/SubclassOf.h"

FIGS_Contract::FIGS_Contract() {
    (*this).ID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).Price = 0.000000000e+00f;
    (*this).ContractPriceMultiplierByRespect = TMap<EMETA_RespectLvl, float>{};
    (*this).UnlockCriteriaTag = FGameplayTag();
    (*this).EntitlementTag = FGameplayTag();
    (*this).Missions = TArray<TSubclassOf<UMETA_MissionID>>{};
}
