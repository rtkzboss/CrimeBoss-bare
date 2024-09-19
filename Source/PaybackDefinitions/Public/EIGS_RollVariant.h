#pragma once
#include "CoreMinimal.h"
#include "EIGS_RollVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_RollVariant : uint8 {
    ROLL_Unknown = 255 UMETA(DisplayName=Unknown),
    ROLL_None = 0 UMETA(DisplayName=None),
    ROLL_ToStand_Short UMETA(DisplayName="To Stand Short"),
    ROLL_ToCrouch_Short UMETA(DisplayName="To Crouch Short"),
    ROLL_ToStand_Medium UMETA(DisplayName="To Stand Medium"),
    ROLL_ToCrouch_Medium UMETA(DisplayName="To Crouch Medium"),
    ROLL_ToStand_Long UMETA(DisplayName="To Stand Long"),
    ROLL_ToCrouch_Long UMETA(DisplayName="To Crouch Long"),
};
