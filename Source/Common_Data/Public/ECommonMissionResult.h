#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.generated.h"

UENUM(BlueprintType)
enum class ECommonMissionResult : uint8 {
    Res_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    Res_Abort = 0 UMETA(DisplayName=Abort),
    Res_Fail UMETA(DisplayName=Fail),
    Res_Success UMETA(DisplayName=Success),
    Res_Escaped UMETA(DisplayName=Escaped),
};
