#include "IGS_GeneratorBuildConfiguration.h"
#include "IGS_BuildConfigurationDataAsset.h"

UIGS_GeneratorBuildConfiguration::UIGS_GeneratorBuildConfiguration() {
}

void UIGS_GeneratorBuildConfiguration::SetBuildConfiguration(UIGS_BuildConfigurationDataAsset* BCDA)
{
	BuildConfigurationDataAsset = BCDA;
	if (!BCDA)
	{
		Cooked_ConnectionPoints.Empty();
		Cooked_Variants.Empty();
		return;
	}
	Cooked_ConnectionPoints = BCDA->ConnectionPoints;
	Cooked_Variants = BCDA->Variants;
}

