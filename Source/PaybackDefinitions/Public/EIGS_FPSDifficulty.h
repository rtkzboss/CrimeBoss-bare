#pragma once
#include "CoreMinimal.h"
#include "EIGS_FPSDifficulty.generated.h"

UENUM(BlueprintType)
enum class EIGS_FPSDifficulty : uint8 {
    FD_Unknown UMETA(DisplayName=Unknown),
    FD_Normal UMETA(DisplayName=Normal),
    FD_Hard UMETA(DisplayName=Hard),
    FD_Extreme UMETA(DisplayName=Extreme),
};
