#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_HeisterEliminationReward.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeisterEliminationReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMETA_ItemQuality> Quality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnique;

    FMETA_HeisterEliminationReward();
};
