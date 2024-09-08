#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.generated.h"

UENUM()
enum class EIGS_HealthState : uint8 {
    HS_Normal,
    HS_DownMoveable,
    HS_DownPinned,
};

