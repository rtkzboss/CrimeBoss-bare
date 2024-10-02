#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSize.h"
#include "IGS_JobCategoryItemUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_JobCategoryItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MenuTileSize TileSize;

    CRIMEBOSSMETA_API FIGS_JobCategoryItemUIData();
};
