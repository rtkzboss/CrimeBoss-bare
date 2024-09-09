#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PaybackCoreMapsData.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UPaybackCoreMapsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPaybackCoreMapsData();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MainMenuMapName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MetaGameMapName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GamePreparationLobbyMapName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GameEndLobbyMapName;
    
};

