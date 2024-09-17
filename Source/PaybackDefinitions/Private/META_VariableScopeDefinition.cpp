#include "META_VariableScopeDefinition.h"

FMETA_VariableScopeDefinition::FMETA_VariableScopeDefinition() {
    (*this).VariablesScope = EMETA_VariablesScope::Any;
    (*this).Variable = 0;
    (*this).variableTag = FGameplayTag();
}
