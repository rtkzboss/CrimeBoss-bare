#pragma once
#include "CoreMinimal.h"
#include "EIGS_DefendPointRotationType.generated.h"

UENUM()
enum class EIGS_DefendPointRotationType : uint8 {
    TS_Unknown = 255,
    TS_None = 0,
    TS_OutFromCenter,
    TS_AllignWithForward,
    TS_Custom,
    TS_InToCenter,
};

