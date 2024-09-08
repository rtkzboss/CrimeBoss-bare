#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotOrderResult.generated.h"

UENUM()
enum class EIGS_BotOrderResult : uint8 {
    Unknown = 255,
    Success = 0,
    NoAction,
    NoBots,
    BotsBusy,
};

