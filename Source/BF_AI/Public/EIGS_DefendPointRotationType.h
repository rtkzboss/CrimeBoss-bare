#pragma once
#include "CoreMinimal.h"
#include "EIGS_DefendPointRotationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DefendPointRotationType : uint8 {
    TS_Unknown = 255 UMETA(DisplayName=Unknown),
    TS_None = 0 UMETA(DisplayName=None),
    TS_OutFromCenter UMETA(DisplayName="Out From Center"),
    TS_AllignWithForward UMETA(DisplayName="Allign With Forward"),
    TS_Custom UMETA(DisplayName=Custom),
    TS_InToCenter UMETA(DisplayName="In To Center"),
};
