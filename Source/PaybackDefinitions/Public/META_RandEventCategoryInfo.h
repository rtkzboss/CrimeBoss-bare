#pragma once
#include "CoreMinimal.h"
#include "META_RandEventCategoryInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_RandEventCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Cooldown;

    FMETA_RandEventCategoryInfo();
};
