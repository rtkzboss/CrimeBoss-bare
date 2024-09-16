#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_DetectiveInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_DetectiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CurrentTurfTileID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCurrentTileNeutralized;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysLeftToStayOnCurrentTile;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> NeutralizedTiles;

    FMETA_DetectiveInfo();
};
