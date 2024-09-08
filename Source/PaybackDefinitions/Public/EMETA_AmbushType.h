#pragma once
#include "CoreMinimal.h"
#include "EMETA_AmbushType.generated.h"

UENUM()
enum class EMETA_AmbushType : uint8 {
    UNDEFINED,
    Instant,
    Escape,
};

