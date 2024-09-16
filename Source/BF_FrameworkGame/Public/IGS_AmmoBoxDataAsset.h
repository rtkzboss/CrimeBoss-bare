#pragma once
#include "CoreMinimal.h"
#include "IGS_AmmoInventoryObject.h"
#include "Engine/DataAsset.h"
#include "IGS_AmmoBoxData.h"
#include "Templates/SubclassOf.h"
#include "IGS_AmmoBoxDataAsset.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AmmoBoxDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AmmoBoxDataAsset();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UIGS_AmmoInventoryObject>, FIGS_AmmoBoxData> AmmoData;

};
