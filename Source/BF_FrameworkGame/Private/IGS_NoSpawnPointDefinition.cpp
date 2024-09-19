#include "IGS_NoSpawnPointDefinition.h"

FIGS_NoSpawnPointDefinition::FIGS_NoSpawnPointDefinition() {
    (*this).PassengerSpawnDefinitions = TArray<FIGS_NoSpawnPointSpawnDefinition>{};
    (*this).bIsFilled = false;
}
