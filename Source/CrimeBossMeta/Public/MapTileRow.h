#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EMETA_TileSize.h"
#include "EMETA_TileType.h"
#include "EMETA_TileWealth.h"
#include "MapTileRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMapTileRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> Neighbours;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_TileWealth MinWealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_TileWealth MaxWealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_TileType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_TileSize Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_HubDistrict DistrictType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_HubBackdropTypes BackdropType;
    
    FMapTileRow();
};

