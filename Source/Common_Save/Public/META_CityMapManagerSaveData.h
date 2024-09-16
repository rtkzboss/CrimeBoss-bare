#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_TileSaveData.h"
#include "META_CityMapManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_CityMapManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, FMETA_TileSaveData> TilesSaveData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> BaseStrengthOfTiles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 LastDayOfTilesIncomeRefresh;

    FMETA_CityMapManagerSaveData();
};
