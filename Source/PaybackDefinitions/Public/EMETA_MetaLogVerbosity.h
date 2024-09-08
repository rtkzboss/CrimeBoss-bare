#pragma once
#include "CoreMinimal.h"
#include "EMETA_MetaLogVerbosity.generated.h"

UENUM()
enum class EMETA_MetaLogVerbosity : uint8 {
    Log,
    Display,
    Warning,
    Error,
    Count,
};

