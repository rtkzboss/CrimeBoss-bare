#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotOrderActionSource.generated.h"

UENUM()
enum class EIGS_BotOrderActionSource : uint8 {
    Unknown = 255,
    Custom = 0,
    SmartPing,
    HoldPing,
    BotWheel,
};

