#pragma once
#include "CoreMinimal.h"
#include "EIGS_AITiers.generated.h"

UENUM(BlueprintType)
enum class EIGS_AITiers : uint8 {
    AT_Tier1 UMETA(DisplayName="Tier 1"),
    AT_Tier2 = 2 UMETA(DisplayName="Tier 2"),
    AT_Tier3 = 4 UMETA(DisplayName="Tier 3"),
    AT_Special = 8 UMETA(DisplayName=Special),
    AT_Unknown = 128 UMETA(DisplayName=Unknown),
};
