#pragma once
#include "CoreMinimal.h"
#include "EIGS_CustomSlotFilteringResult.generated.h"

UENUM(BlueprintType)
enum class EIGS_CustomSlotFilteringResult : uint8 {
    Res_Passed UMETA(DisplayName=Passed),
    Res_Failed UMETA(DisplayName=Failed),
    Res_Unhandled UMETA(DisplayName=Unhandled),
};
