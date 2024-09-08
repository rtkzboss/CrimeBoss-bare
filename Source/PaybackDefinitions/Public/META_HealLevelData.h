#pragma once
#include "CoreMinimal.h"
#include "META_HealLevelData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HealLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, int32> WantedStarChances;
    
    FMETA_HealLevelData();
};

