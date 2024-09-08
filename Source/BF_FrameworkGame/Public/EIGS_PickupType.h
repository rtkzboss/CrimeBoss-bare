#pragma once
#include "CoreMinimal.h"
#include "EIGS_PickupType.generated.h"

UENUM()
enum class EIGS_PickupType : uint8 {
    Default,
    Bag,
    Weapon,
    Ammo,
    InventoryItem,
    Carryable,
    CarryableLoot,
    StaticMesh,
};

