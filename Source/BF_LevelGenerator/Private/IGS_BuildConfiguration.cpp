#include "IGS_BuildConfiguration.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"

FIGS_BuildConfiguration::FIGS_BuildConfiguration() {
    (*this).Filters = TArray<FString>{};
    (*this).BuildConfigurationDataAsset = FSoftObjectPath();
    (*this).BuildConfigurationDataAsset_Holder = nullptr;
    (*this).VariantName = NAME_None;
    (*this).ConnectionName = NAME_None;
    (*this).CachedBuildConfiguration.ConnectionPoints = TArray<FIGS_ConnectionPointData>{};
    (*this).CachedBuildConfiguration.Variants = TArray<FIGS_VariantDefinition>{};
    (*this).CachedBuildConfiguration.Level = FSoftObjectPath();
    (*this).CachedBuildConfiguration.Initialized = false;
}

void FIGS_BuildConfiguration::SetBuildConfiguration(UIGS_BuildConfigurationDataAsset* BCDA)
{
	BuildConfigurationDataAsset = BCDA;
	CachedBuildConfiguration = BCDA;
}
