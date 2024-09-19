#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverPreset.generated.h"

UENUM(BlueprintType)
enum class EIGS_CoverPreset : uint8 {
    AICS_None UMETA(DisplayName=None),
    AICS_Reckless UMETA(DisplayName=Reckless),
    AICS_Standard UMETA(DisplayName=Standard),
    AICS_Cautious UMETA(DisplayName=Cautious),
    AICS_Unknown = 255 UMETA(DisplayName=Unknown),
};
