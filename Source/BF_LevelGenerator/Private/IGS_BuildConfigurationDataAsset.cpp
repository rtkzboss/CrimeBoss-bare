#include "IGS_BuildConfigurationDataAsset.h"
#include "IGS_CachedBuildConfiguration.h"

UIGS_BuildConfigurationDataAsset::UIGS_BuildConfigurationDataAsset() {
    (*this).Level = FSoftObjectPath();
}

UIGS_BuildConfigurationDataAsset& UIGS_BuildConfigurationDataAsset::operator=(FIGS_CachedBuildConfiguration&& BC)
{
	check(BC.Initialized);
	ConnectionPoints = MoveTemp(BC.ConnectionPoints);
	Variants = MoveTemp(BC.Variants);
	Level = MoveTemp(BC.Level);
	return *this;
}

