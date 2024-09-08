#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.generated.h"

UENUM()
enum class EIGS_UnlockCategory : uint8 {
    UC_Weapons,
    UC_WeaponSkins,
    UC_Equipment,
    UC_Characters,
    UC_CharacterSkins,
    UC_Perks,
    UC_NumOfCategories,
    UC_Unknown = 255,
};

