#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_HubGroupTileSetup.h"
#include "IGS_PresetData.generated.h"

UCLASS(BlueprintType)
class BF_LEVELGENERATOR_API UIGS_PresetData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_PresetData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_HubGroupTileSetup> Tiles;
    
};

