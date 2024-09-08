#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueBlacklistOption.generated.h"

UENUM()
enum class EIGS_DialogueBlacklistOption : uint8 {
    NoBlacklist,
    OnlyDefault,
    OnlyLevel,
    All,
};

