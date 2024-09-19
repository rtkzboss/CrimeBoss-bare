#include "IGS_FPSDifficultyDataAsset.h"

UIGS_FPSDifficultyDataAsset::UIGS_FPSDifficultyDataAsset() {
    (*this).FPSDifficultySettings = TMap<EIGS_FPSDifficulty, FIGS_FPSDifficultySettings>{};
}

