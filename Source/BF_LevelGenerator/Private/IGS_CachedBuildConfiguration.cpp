#include "IGS_CachedBuildConfiguration.h"

FIGS_CachedBuildConfiguration::FIGS_CachedBuildConfiguration() {
    (*this).ConnectionPoints = {};
    (*this).Variants = {};
    (*this).Level = FSoftObjectPath();
    (*this).Initialized = false;
}
