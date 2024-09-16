#pragma once
#include "CoreMinimal.h"
#include "META_BaseGoal.h"
#include "Templates/SubclassOf.h"
#include "META_GoalsStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GoalsStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_BaseGoal>> FinishedGoalsID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_BaseGoal>> FailedGoalsID;

    FMETA_GoalsStatistic();
};
