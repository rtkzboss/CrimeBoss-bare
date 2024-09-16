#include "IGS_BuildConfiguration.h"

FIGS_BuildConfiguration::FIGS_BuildConfiguration() {
    (*this).Filters = {};
    (*this).BuildConfigurationDataAsset = FSoftObjectPath();
    (*this).BuildConfigurationDataAsset_Holder = nullptr;
    (*this).VariantName = NAME_None;
    (*this).ConnectionName = NAME_None;
    (*this).CachedBuildConfiguration.ConnectionPoints = {};
    (*this).CachedBuildConfiguration.Variants = {};
    (*this).CachedBuildConfiguration.Level = FSoftObjectPath();
    (*this).CachedBuildConfiguration.Initialized = false;
}
