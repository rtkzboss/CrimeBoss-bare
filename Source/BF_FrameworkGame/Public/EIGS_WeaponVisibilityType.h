#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeaponVisibilityType : uint8 {
    VT_None UMETA(DisplayName=None),
    VT_Laser UMETA(DisplayName=Laser),
    VT_Flashlight UMETA(DisplayName=Flashlight),
    VT_ScopeGlint = 4 UMETA(DisplayName="Scope Glint"),
};
