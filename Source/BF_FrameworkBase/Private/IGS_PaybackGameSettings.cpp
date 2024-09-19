#include "IGS_PaybackGameSettings.h"

UIGS_PaybackGameSettings::UIGS_PaybackGameSettings() {
    (*this).TeamSideColors = TMap<EIGS_TeamSideEnum, FColor>{};
    (*this).TeamSideAffinitiesMap = TMap<EIGS_TeamSideEnum, FIGS_TeamSideAffinitiesHolder>{};
}

