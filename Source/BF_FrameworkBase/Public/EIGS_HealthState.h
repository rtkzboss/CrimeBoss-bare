#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.generated.h"

UENUM(BlueprintType)
enum class EIGS_HealthState : uint8 {
    HS_Normal UMETA(DisplayName=Normal),
    HS_DownMoveable UMETA(DisplayName="Down Moveable"),
    HS_DownPinned UMETA(DisplayName="Down Pinned"),
};
