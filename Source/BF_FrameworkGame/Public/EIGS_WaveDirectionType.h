#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaveDirectionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WaveDirectionType : uint8 {
    WDT_None UMETA(DisplayName=None),
    WDT_North UMETA(DisplayName=North),
    WDT_East UMETA(DisplayName=East),
    WDT_South UMETA(DisplayName=South),
    WDT_West UMETA(DisplayName=West),
};
