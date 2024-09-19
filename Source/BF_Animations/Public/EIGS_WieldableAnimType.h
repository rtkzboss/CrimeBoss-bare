#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableAnimType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldableAnimType : uint8 {
    EIGS_Weapon UMETA(DisplayName=Weapon),
    EIGS_MeleeWeapon UMETA(DisplayName="Melee Weapon"),
    EIGS_Throwable UMETA(DisplayName=Throwable),
    EIGS_Carryable UMETA(DisplayName=Carryable),
    EIGS_Unarmed UMETA(DisplayName=Unarmed),
    EIGS_Undefined UMETA(DisplayName=Undefined),
};
