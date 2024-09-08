#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_HubTileType.h"
#include "EIGS_TileRotation.h"
#include "IGS_SingleTileSetup.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SingleTileSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubTileType TileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRandomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TileRotation TileRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle ForcedTile;
    
    BF_LEVELGENERATOR_API FIGS_SingleTileSetup();
};

