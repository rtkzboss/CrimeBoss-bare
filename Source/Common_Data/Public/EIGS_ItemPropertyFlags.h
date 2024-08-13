#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemPropertyFlags.generated.h"

UENUM(BlueprintType, meta=(Bitflags))
enum class EIGS_ItemPropertyFlags : uint8 {
    Property_Droppable UMETA(DisplayName=Droppable),
    Property_Stackable UMETA(DisplayName=Stackable),
    Property_Consumable UMETA(DisplayName=Consumable),
    Property_Wieldable UMETA(DisplayName=Wieldable),
    Property_PlayerForbidden UMETA(DisplayName="Player Forbidden"),
    Property_Metal UMETA(DisplayName=Metal),
    Property_Money UMETA(DisplayName=Money),
    Property_LootBag UMETA(DisplayName="Loot Bag"),
};
