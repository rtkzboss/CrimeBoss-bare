#include "IGS_HUBLevelWithTag.h"

FIGS_HUBLevelWithTag::FIGS_HUBLevelWithTag() {
    (*this).ScenarioTag = FGameplayTag();
    (*this).LevelDA.BuildConfigurationDataAsset = nullptr;
    (*this).LevelDA.VariantIndex = 0;
}
