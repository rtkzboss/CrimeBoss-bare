#pragma once
#include "CoreMinimal.h"
#include "EIGS_VehicleSplineGroup.generated.h"

UENUM()
enum class EIGS_VehicleSplineGroup : uint8 {
    None,
    CarFriendly,
    CarEnemy,
    BoatFriendly,
    BoatEnemy,
    HelicopterFriendly,
    HelicopterEnemy,
};

