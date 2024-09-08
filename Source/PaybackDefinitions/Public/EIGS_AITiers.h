#pragma once
#include "CoreMinimal.h"
#include "EIGS_AITiers.generated.h"

UENUM()
enum class EIGS_AITiers : uint8 {
    AT_Tier1,
    AT_Tier2 = 2,
    AT_Tier3 = 4,
    AT_Special = 8,
    AT_Unknown = 128,
};

