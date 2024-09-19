#pragma once
#include "CoreMinimal.h"
#include "EIGS_WalkieTalkieStatus.generated.h"

UENUM(BlueprintType)
enum class EIGS_WalkieTalkieStatus : uint8 {
    WalkieTalkie_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    WalkieTalkie_None = 0 UMETA(DisplayName=None),
    WalkieTalkie_Strike UMETA(DisplayName=Strike),
    WalkieTalkie_Alarm UMETA(DisplayName=Alarm),
};
