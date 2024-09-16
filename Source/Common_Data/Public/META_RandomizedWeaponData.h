#pragma once
#include "CoreMinimal.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_RandomizedWeaponData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_RandomizedWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UMETA_WeaponInventoryObject> Weapon;

    UPROPERTY()
    int32 Cost;

    FMETA_RandomizedWeaponData();
};
