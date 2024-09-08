#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterLeaningDirectionEnum.generated.h"

UENUM()
enum class EIGS_CharacterLeaningDirectionEnum : uint8 {
    None,
    Left,
    Right,
    Up,
    Down,
    MAX,
    UNKNOWN = 255,
};

