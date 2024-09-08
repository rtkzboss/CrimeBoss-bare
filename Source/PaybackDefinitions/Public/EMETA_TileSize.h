#pragma once
#include "CoreMinimal.h"
#include "EMETA_TileSize.generated.h"

UENUM()
enum class EMETA_TileSize : uint8 {
    Unlimited,
    Small,
    Medium,
    Large,
};

