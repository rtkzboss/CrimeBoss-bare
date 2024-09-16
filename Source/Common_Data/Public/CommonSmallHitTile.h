#pragma once
#include "CoreMinimal.h"
#include "CommonSmallHitTile.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonSmallHitTile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpecificTiles;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<uint8> SpecifiedTiles;

    FCommonSmallHitTile();
};
