#pragma once
#include "CoreMinimal.h"
#include "EMETA_ReturnedDataProcessingMode.generated.h"

UENUM()
enum class EMETA_ReturnedDataProcessingMode : uint8 {
    AcceptLoot,
    IgnoreLoot,
    IgnoreLootAndWeapons,
};

