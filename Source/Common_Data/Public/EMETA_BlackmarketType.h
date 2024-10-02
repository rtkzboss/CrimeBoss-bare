#pragma once
#include "CoreMinimal.h"
#include "EMETA_BlackmarketType.generated.h"

UENUM(BlueprintType)
enum class EMETA_BlackmarketType : uint8 {
    Unknown,
    Weapons,
    Characters,
    HireArmy = 4,
    All = 7,
};
