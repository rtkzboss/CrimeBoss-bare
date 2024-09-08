#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverPreset.generated.h"

UENUM()
enum class EIGS_CoverPreset : uint8 {
    AICS_None,
    AICS_Reckless,
    AICS_Standard,
    AICS_Cautious,
    AICS_Unknown = 255,
};

