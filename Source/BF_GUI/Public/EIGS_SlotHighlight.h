#pragma once
#include "CoreMinimal.h"
#include "EIGS_SlotHighlight.generated.h"

UENUM(BlueprintType)
enum class EIGS_SlotHighlight : uint8 {
    SH_Normal UMETA(DisplayName=Normal),
    SH_Hovered UMETA(DisplayName=Hovered),
    SH_DropOk UMETA(DisplayName="Drop Ok"),
    SH_DropFail UMETA(DisplayName="Drop Fail"),
    SH_MAX UMETA(Hidden),
    SH_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
};
