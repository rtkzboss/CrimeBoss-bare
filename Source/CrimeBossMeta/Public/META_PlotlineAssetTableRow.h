#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAssetTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlotlineAssetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 UnlockBossLevel;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag PreviousVersion;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag NextTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText AssetName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Score;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BossPointMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeLost;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_PlotlineAssetAvailability Availability;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMustBeBought;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag PriceTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Price;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotPersistent;

    FMETA_PlotlineAssetTableRow();
};
