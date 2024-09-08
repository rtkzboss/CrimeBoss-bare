#pragma once
#include "CoreMinimal.h"
#include "EMETA_TileType.generated.h"

UENUM()
enum class EMETA_TileType : uint8 {
    Empty,
    Airport,
    Fort,
    Police,
    Prison,
    Cemetery,
    Central,
};

