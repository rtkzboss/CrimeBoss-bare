#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_TileManagerDatabaseRow.h"
#include "IGS_TileManagerDatabaseAsset.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_TileManagerDatabaseAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_TileManagerDatabaseAsset();

    UFUNCTION(BlueprintCallable)
    bool HasTileData(const FString& inTileName);

    UFUNCTION(BlueprintCallable)
    void AddOrUpdate(const FString& inTileName, FIGS_TileManagerDatabaseRow inTileData);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FIGS_TileManagerDatabaseRow> TileData;

};
