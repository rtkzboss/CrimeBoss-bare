#pragma once
#include "CoreMinimal.h"
#include "EIGS_MovementSlope.generated.h"

UENUM(BlueprintType)
enum class EIGS_MovementSlope : uint8 {
    FSW_Normal UMETA(DisplayName=Normal),
    FSW_UpStairs UMETA(DisplayName="Up Stairs"),
    FSW_DownStairs UMETA(DisplayName="Down Stairs"),
};
