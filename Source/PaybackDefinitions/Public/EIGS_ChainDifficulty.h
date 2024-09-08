#pragma once
#include "CoreMinimal.h"
#include "EIGS_ChainDifficulty.generated.h"

UENUM()
enum class EIGS_ChainDifficulty : uint8 {
    Unknown,
    Easy,
    Medium,
    Hard,
};

