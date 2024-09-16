#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_TileEnviroment.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBTileRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBTileRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsEnabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDebug;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_TileEnviroment TileEnviroment;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 DistrictType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BuildConfigurationTileable ArtDA;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FIGS_BuildConfigurationTileable> Scenarios;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_BuildConfigurationTileable> Supports;

    BF_LEVELGENERATOR_API FIGS_HUBTileRow();
};
