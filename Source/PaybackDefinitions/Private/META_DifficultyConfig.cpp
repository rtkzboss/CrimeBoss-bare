#include "META_DifficultyConfig.h"

FMETA_DifficultyConfig::FMETA_DifficultyConfig() {
    (*this).Config = TMap<EIGS_ScenarioDifficulty, int32>{};
}
