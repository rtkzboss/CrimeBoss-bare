#pragma once
#include "CoreMinimal.h"
#include "EMETA_EventTime.generated.h"

UENUM()
enum class EMETA_EventTime : uint8 {
    DayStart,
    DayMiddle,
    DayEnd,
};

