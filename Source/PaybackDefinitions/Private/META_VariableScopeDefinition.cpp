#include "META_VariableScopeDefinition.h"

FMETA_VariableScopeDefinition::FMETA_VariableScopeDefinition() {
    (*this).VariablesScope = EMETA_VariablesScope::Any;
    (*this).Variable = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).variableTag, 0)) = NAME_None;
}
