#pragma once
#include "CoreMinimal.h"
#include "EIGS_QuickMissionType.generated.h"

UENUM()
enum class EIGS_QuickMissionType {
    UNKNOWN = 255,
    Opportunity = 0,
    Contract,
    ChainContract,
    ShuffleContract,
};

