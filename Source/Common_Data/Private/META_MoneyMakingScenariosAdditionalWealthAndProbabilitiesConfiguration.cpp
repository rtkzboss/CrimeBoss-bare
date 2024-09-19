#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"

FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration::FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() {
    (*this).MoneyMakingScenarios = FGameplayTagContainer();
    (*this).RewardsAndProbabilities = TMap<EMETA_RespectLvl, FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios>{};
}
