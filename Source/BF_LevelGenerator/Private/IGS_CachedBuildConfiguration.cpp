#include "IGS_CachedBuildConfiguration.h"

FIGS_CachedBuildConfiguration::FIGS_CachedBuildConfiguration() {
    (*this).ConnectionPoints = TArray<FIGS_ConnectionPointData>{};
    (*this).Variants = TArray<FIGS_VariantDefinition>{};
    (*this).Level = FSoftObjectPath();
    (*this).Initialized = false;
}
