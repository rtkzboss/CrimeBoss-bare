#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerLockState.generated.h"

UENUM()
enum class EIGS_PlayerLockState : uint8 {
    Unlocked,
    LockedHasKey,
    LockedNoKey,
};

