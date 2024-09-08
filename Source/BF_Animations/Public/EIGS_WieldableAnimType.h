#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableAnimType.generated.h"

UENUM()
enum class EIGS_WieldableAnimType {
    EIGS_Weapon,
    EIGS_MeleeWeapon,
    EIGS_Throwable,
    EIGS_Carryable,
    EIGS_Unarmed,
    EIGS_Undefined,
};

