#include "META_CategoryEconomyVariable.h"

FMETA_CategoryEconomyVariable::FMETA_CategoryEconomyVariable() {
    (*this).GraphEconomyVariables = TMap<FGameplayTag, FMETA_EconomyGraphVariableModeData>{};
}
