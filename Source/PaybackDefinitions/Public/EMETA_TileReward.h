#pragma once
#include "CoreMinimal.h"
#include "EMETA_TileReward.generated.h"

UENUM()
enum class EMETA_TileReward : uint8 {
    None,
    Cash,
    Loot,
    Soldiers,
    Weapon,
};

