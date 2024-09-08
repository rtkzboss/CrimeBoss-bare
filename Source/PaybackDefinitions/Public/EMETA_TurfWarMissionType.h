#pragma once
#include "CoreMinimal.h"
#include "EMETA_TurfWarMissionType.generated.h"

UENUM()
enum class EMETA_TurfWarMissionType : uint8 {
    None,
    Attack,
    Defence,
    Capture,
};

