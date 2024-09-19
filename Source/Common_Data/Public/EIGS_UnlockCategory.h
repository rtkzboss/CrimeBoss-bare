#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnlockCategory : uint8 {
    UC_Weapons UMETA(DisplayName=Weapons),
    UC_WeaponSkins UMETA(DisplayName="Weapon Skins"),
    UC_Equipment UMETA(DisplayName=Equipment),
    UC_Characters UMETA(DisplayName=Characters),
    UC_CharacterSkins UMETA(DisplayName="Character Skins"),
    UC_Perks UMETA(DisplayName=Perks),
    UC_NumOfCategories UMETA(DisplayName="Num Of Categories"),
    UC_Unknown = 255 UMETA(DisplayName=Unknown),
};
