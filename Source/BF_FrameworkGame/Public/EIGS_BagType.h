#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.generated.h"

UENUM(BlueprintType)
enum class EIGS_BagType : uint8 {
    Bag_Unknown UMETA(DisplayName=Unknown),
    Bag_Generic UMETA(DisplayName=Generic),
    Bag_Loot_Common UMETA(DisplayName="Loot Common"),
    Bag_Loot_Uncommon UMETA(DisplayName="Loot Uncommon"),
    Bag_Loot_Rare UMETA(DisplayName="Loot Rare"),
    Bag_Loot_Epic UMETA(DisplayName="Loot Epic"),
    Bag_Loot_Legendary UMETA(DisplayName="Loot Legendary"),
};
