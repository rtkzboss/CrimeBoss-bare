#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayTimeReward.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_GameplayTimeReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinGameplayTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxGameplayTime;

    FIGS_GameplayTimeReward();
};
