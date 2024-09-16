#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_WeaponEconomyData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float UpgradeCostMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SuccesfullMissionsForUpgrade;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 AmountOfWeaponsForUpgradeSelection;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval BuyCostValueRange;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SellMultiplier;

    FMETA_WeaponEconomyData();
};
