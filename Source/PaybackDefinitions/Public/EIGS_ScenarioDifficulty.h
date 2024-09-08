#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficulty.generated.h"

UENUM()
enum class EIGS_ScenarioDifficulty : uint8 {
    SD_Unknown,
    SD_LightForce,
    SD_MediumForce,
    SD_HeavyForce,
};

