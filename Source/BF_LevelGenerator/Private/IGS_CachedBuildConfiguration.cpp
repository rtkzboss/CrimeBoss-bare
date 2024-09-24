#include "IGS_CachedBuildConfiguration.h"
#include "IGS_BuildConfigurationDataAsset.h"

FIGS_CachedBuildConfiguration::FIGS_CachedBuildConfiguration() {
    (*this).ConnectionPoints = TArray<FIGS_ConnectionPointData>{};
    (*this).Variants = TArray<FIGS_VariantDefinition>{};
    (*this).Level = FSoftObjectPath();
    (*this).Initialized = false;
}

FIGS_CachedBuildConfiguration& FIGS_CachedBuildConfiguration::operator=(UIGS_BuildConfigurationDataAsset* BCDA)
{
	Initialized = static_cast<bool>(BCDA);
	if (BCDA)
	{
		ConnectionPoints = BCDA->ConnectionPoints;
		Variants = BCDA->Variants;
		Level = BCDA->Level;
	}
	else
	{
		ConnectionPoints.Empty();
		Variants.Empty();
		Level = nullptr;
	}
	return *this;
}
