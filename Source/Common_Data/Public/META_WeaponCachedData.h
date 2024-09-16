#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_WeaponCachedData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UMETA_WeaponInventoryObject> Weapon;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag WeaponTag;

    FMETA_WeaponCachedData();
};
