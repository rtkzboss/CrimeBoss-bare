#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_GenericCharacterConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_GenericCharacterConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMETA_Interval LevelRange;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 AllowedWeaponQualities;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 AllowedEquipmentQualities;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 StartingPerkCount;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaximumPerkCount;

    FMETA_GenericCharacterConfiguration();
};
