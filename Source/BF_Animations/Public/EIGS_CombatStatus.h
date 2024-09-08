#pragma once
#include "CoreMinimal.h"
#include "EIGS_CombatStatus.generated.h"

UENUM()
enum class EIGS_CombatStatus : uint8 {
    EIGS_Combat,
    EIGS_Stealth,
};

