#include "IGS_LightingScenarioWorldSettings.h"

FIGS_LightingScenarioWorldSettings::FIGS_LightingScenarioWorldSettings() {
    (*this).LightingScenarioHelp = TEXT("Lighting scenarios are enabled via level blueprint.\n This settings is for type/level pairing only.");
    (*this).bLevelIsPersistent = false;
    (*this).DefaultLightingScenarioLevel = FSoftObjectPath();
    (*this).bUseDefaultScenario = true;
    (*this).LightingScenarioMapPairs = TMap<EIGS_LightingScenarioType, TSoftObjectPtr<UWorld>>{};
}
