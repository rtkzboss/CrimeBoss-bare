#pragma once
#include "CoreMinimal.h"
#include "EIGS_SWATVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SWATVariationType : uint8 {
    US_None UMETA(DisplayName=None),
    US_SWAT UMETA(DisplayName=SWAT),
    US_FPSMaxIndex = 128 UMETA(DisplayName="FPS Max Index"),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
