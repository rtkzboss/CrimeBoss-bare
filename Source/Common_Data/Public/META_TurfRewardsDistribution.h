#pragma once
#include "CoreMinimal.h"
#include "META_TurfRewardsDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TurfRewardsDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercantageOfTilesWithOneReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercantageOfTilesWithTwoRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercantageOfTilesWithThreeRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RewardsAmountForRepeatedCapture;
    
    FMETA_TurfRewardsDistribution();
};

