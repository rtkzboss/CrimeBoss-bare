#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueCharacterCooldown.generated.h"

UENUM()
enum class EIGS_DialogueCharacterCooldown : uint8 {
    Instant,
    Short,
    Medium,
    Long,
};

