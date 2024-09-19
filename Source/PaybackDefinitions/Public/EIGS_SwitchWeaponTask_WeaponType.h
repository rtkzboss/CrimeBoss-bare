#pragma once
#include "CoreMinimal.h"
#include "EIGS_SwitchWeaponTask_WeaponType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SwitchWeaponTask_WeaponType : uint8 {
    WT_Unknown = 255 UMETA(DisplayName=Unknown),
    WT_Primary = 0 UMETA(DisplayName=Primary),
    WT_Secondary UMETA(DisplayName=Secondary),
    WT_Melee UMETA(DisplayName=Melee),
    WT_Holstered UMETA(DisplayName=Holstered),
    WT_Carryable UMETA(DisplayName=Carryable),
    WT_MountedGun UMETA(DisplayName="Mounted Gun"),
    WT_MAX UMETA(Hidden),
};
