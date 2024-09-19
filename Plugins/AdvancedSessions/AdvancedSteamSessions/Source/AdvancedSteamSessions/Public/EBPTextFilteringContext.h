#pragma once
#include "CoreMinimal.h"
#include "EBPTextFilteringContext.generated.h"

UENUM(BlueprintType)
enum class EBPTextFilteringContext : uint8 {
    FContext_Unknown UMETA(DisplayName=Unknown),
    FContext_GameContent UMETA(DisplayName="Game Content"),
    FContext_Chat UMETA(DisplayName=Chat),
    FContext_Name UMETA(DisplayName=Name),
};
