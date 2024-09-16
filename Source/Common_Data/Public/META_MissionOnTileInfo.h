#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_MissionOnTileInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionOnTileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag OwningTileTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TilePositionIndex;

    FMETA_MissionOnTileInfo();
};
