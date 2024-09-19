#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIUnitDBSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIUnitDBSource : uint8 {
    US_Unknown UMETA(DisplayName=Unknown),
    US_FPS UMETA(DisplayName=FPS),
    US_Story UMETA(DisplayName=Story),
    US_Old UMETA(DisplayName=Old),
    US_FPS_VIP = 11 UMETA(DisplayName="FPS VIP"),
    US_Story_VIP UMETA(DisplayName="Story VIP"),
};
