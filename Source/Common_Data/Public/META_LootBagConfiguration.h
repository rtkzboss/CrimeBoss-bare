#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_LootBagConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_LootBagConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer Missions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalLootbagCount;

    FMETA_LootBagConfiguration();
};
