#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldableSlot : uint8 {
    S_PrimaryWeapon UMETA(DisplayName="Primary Weapon"),
    S_MIN = S_PrimaryWeapon UMETA(DisplayName=MIN),
    S_SecondaryWeapon UMETA(DisplayName="Secondary Weapon"),
    S_MeleeWeapon UMETA(DisplayName="Melee Weapon"),
    S_Ability1 UMETA(DisplayName="Ability 1"),
    S_NORMAL_INDEX = S_Ability1 UMETA(DisplayName="NORMAL INDEX"),
    S_CarryableSlot UMETA(DisplayName="Carryable Slot"),
    S_ExtraSpecialSlot UMETA(DisplayName="Extra Special Slot"),
    S_MAX UMETA(Hidden),
    S_Unarmed = 127 UMETA(DisplayName=Unarmed),
    S_MountedWieldable UMETA(DisplayName="Mounted Wieldable"),
    S_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
};
