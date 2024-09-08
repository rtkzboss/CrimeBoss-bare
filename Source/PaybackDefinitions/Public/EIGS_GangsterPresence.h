#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterPresence.generated.h"

UENUM()
enum class EIGS_GangsterPresence {
    INVALID = 255,
    Unknown = 0,
    Low,
    Normal,
    More,
    Extreme,
};

