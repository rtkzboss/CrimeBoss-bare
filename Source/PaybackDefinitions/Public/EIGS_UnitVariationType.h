#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitVariationType.generated.h"

UENUM()
enum class EIGS_UnitVariationType {
    US_None,
    US_FPSMaxIndex = 128,
    US_Unknown = 255,
};

