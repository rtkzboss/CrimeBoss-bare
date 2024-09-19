#pragma once
#include "CoreMinimal.h"
#include "ERMAFoliageToolsIncludeMode.generated.h"

UENUM(BlueprintType)
enum class ERMAFoliageToolsIncludeMode : uint8 {
    RMAIM_All UMETA(DisplayName=All),
    RMAIM_Selection UMETA(DisplayName=Selection),
};
