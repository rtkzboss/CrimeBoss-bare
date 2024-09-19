#pragma once
#include "CoreMinimal.h"
#include "EIGS_LocomotionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_LocomotionType : uint8 {
    BT_None UMETA(DisplayName=None),
    BT_Normal UMETA(DisplayName=Normal),
    BT_Injured UMETA(DisplayName=Injured),
};
