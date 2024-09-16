#include "IGS_HUBLevelWithTag.h"

FIGS_HUBLevelWithTag::FIGS_HUBLevelWithTag() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ScenarioTag, 0)) = NAME_None;
    (*this).LevelDA.BuildConfigurationDataAsset = nullptr;
    (*this).LevelDA.VariantIndex = 0;
}
