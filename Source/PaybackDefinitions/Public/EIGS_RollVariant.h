#pragma once
#include "CoreMinimal.h"
#include "EIGS_RollVariant.generated.h"

UENUM()
enum class EIGS_RollVariant {
    ROLL_Unknown = 255,
    ROLL_None = 0,
    ROLL_ToStand_Short,
    ROLL_ToCrouch_Short,
    ROLL_ToStand_Medium,
    ROLL_ToCrouch_Medium,
    ROLL_ToStand_Long,
    ROLL_ToCrouch_Long,
};

