#pragma once
#include "CoreMinimal.h"
#include "IGS_ModInventoryObject.h"
#include "IGS_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "CommonWeaponLoadout.generated.h"

class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonWeaponLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UMETA_WeaponInventoryObject> METAWeaponClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;

    FCommonWeaponLoadout();
};
