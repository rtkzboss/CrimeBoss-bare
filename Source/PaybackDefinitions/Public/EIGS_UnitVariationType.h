#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnitVariationType : uint8 {
    US_None UMETA(DisplayName=None),
    US_FPSMaxIndex = 128 UMETA(DisplayName="FPS Max Index"),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
