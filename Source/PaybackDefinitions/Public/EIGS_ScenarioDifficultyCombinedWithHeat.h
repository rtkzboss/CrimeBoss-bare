#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficultyCombinedWithHeat.generated.h"

UENUM()
enum class EIGS_ScenarioDifficultyCombinedWithHeat {
    SDCWH_Unknown,
    SDCWH_LightForce,
    SDCWH_MediumForce,
    SDCWH_HeavyForce,
    SDCWH_VeryHeavyForce,
    SDCWH_Extreme,
};

