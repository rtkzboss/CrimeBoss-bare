#pragma once
#include "CoreMinimal.h"
#include "EMETA_NotificationType.generated.h"

UENUM()
enum class EMETA_NotificationType : uint8 {
    Small,
    Big,
    BigManual,
};

