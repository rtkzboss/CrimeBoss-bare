#pragma once
#include "CoreMinimal.h"
#include "META_PlotlineAssetMaterialSlots.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlotlineAssetMaterialSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TMap<int32, UMaterialInstance*> MaterialSlots;

    FMETA_PlotlineAssetMaterialSlots();
};
