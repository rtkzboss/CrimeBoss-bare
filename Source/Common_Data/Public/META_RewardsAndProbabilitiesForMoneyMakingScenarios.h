#pragma once
#include "CoreMinimal.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeMonetaryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProbabilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LimitOnMap;
    
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios();
};

