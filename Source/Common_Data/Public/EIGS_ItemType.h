#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ItemType : uint8 {
    Item_Weapon UMETA(DisplayName=Weapon),
    Item_Ammo UMETA(DisplayName=Ammo),
    Item_Armor UMETA(DisplayName=Armor),
    Item_Mod UMETA(DisplayName=Mod),
    Item_Material UMETA(DisplayName=Material),
    Item_Blueprint UMETA(DisplayName=Blueprint),
    Item_GenericItems UMETA(DisplayName="Generic Items"),
    Item_Trash UMETA(DisplayName=Trash),
    Item_Gadget UMETA(DisplayName=Gadget),
    Item_Throwable UMETA(DisplayName=Throwable),
    Item_Key UMETA(DisplayName=Key),
    Item_MeleeWeapon UMETA(DisplayName="Melee Weapon"),
    Item_Loot UMETA(DisplayName=Loot),
    Item_Global UMETA(DisplayName=Global),
    Item_Carryable UMETA(DisplayName=Carryable),
    Item_Equipment UMETA(DisplayName=Equipment),
    Item_WeaponDefinition UMETA(DisplayName="Weapon Definition"),
    Item_MAX UMETA(Hidden),
    Item_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
};
