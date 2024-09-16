#pragma once
#include "CoreMinimal.h"
#include "META_MissionAdditionalMonetaryValue.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionAdditionalMonetaryValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float RewardMultiplierFor1stStar;

    UPROPERTY(BlueprintReadWrite)
    float RewardMultiplierFor2ndStar;

    UPROPERTY(BlueprintReadWrite)
    float RewardMultiplierFor3rdStar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ObjectiveValueConvertedToMoneyInPercent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObjectiveMonetaryValueInPercentOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxMonetaryValueMultiplier;

    FMETA_MissionAdditionalMonetaryValue();
};
