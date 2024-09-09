#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_AmmoBoxData.h"
#include "Templates/SubclassOf.h"
#include "IGS_AmmoBoxDataAsset.generated.h"

class UIGS_AmmoInventoryObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AmmoBoxDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AmmoBoxDataAsset();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UIGS_AmmoInventoryObject>, FIGS_AmmoBoxData> AmmoData;
    
};

