#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterState.generated.h"

UENUM()
enum class EIGS_CharacterState : uint8 {
    Calm,
    Alerted,
    Combat,
};

