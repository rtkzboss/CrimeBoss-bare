#pragma once
#include "CoreMinimal.h"
#include "EIGS_UserDifficulty.generated.h"

UENUM(BlueprintType)
enum class EIGS_UserDifficulty : uint8 {
    UD_Unknown UMETA(DisplayName=Unknown),
    UD_Easy UMETA(DisplayName=Easy),
    UD_Medium UMETA(DisplayName=Medium),
    UD_Hard UMETA(DisplayName=Hard),
};
