#pragma once
#include "CoreMinimal.h"
#include "EMETA_LootPurpose.generated.h"

UENUM()
enum class EMETA_LootPurpose : uint8 {
    Received,
    Spent,
    Sold,
};

