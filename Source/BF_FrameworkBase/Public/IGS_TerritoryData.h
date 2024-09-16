#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_RestrictedTagsHolder.h"
#include "IGS_TerritoryData.generated.h"

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_TerritoryData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_TerritoryData();

    UPROPERTY(EditAnywhere)
    TMap<FName, FIGS_RestrictedTagsHolder> RestrictedTagsHolders;

};
