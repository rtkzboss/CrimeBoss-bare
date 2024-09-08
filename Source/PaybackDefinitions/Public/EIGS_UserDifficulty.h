#pragma once
#include "CoreMinimal.h"
#include "EIGS_UserDifficulty.generated.h"

UENUM()
enum class EIGS_UserDifficulty : uint8 {
    UD_Unknown,
    UD_Easy,
    UD_Medium,
    UD_Hard,
};

