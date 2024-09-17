#include "IGS_HubGeneratorPresetRow.h"

FIGS_HubGeneratorPresetRow::FIGS_HubGeneratorPresetRow() {
    (*this).ScenarioType = EIGS_HubScenarioType::Empty;
    (*this).ID = FGameplayTag();
    (*this).ScenarioTags = FGameplayTagContainer();
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).CompatibleEnvironmentTiles = 0;
    (*this).PresetData = nullptr;
    (*this).bEnabled = false;
    (*this).bDebug = false;
    (*this).WaveDirection = 0;
    (*this).BackdropDirection = 0;
}
