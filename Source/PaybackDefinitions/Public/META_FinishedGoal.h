#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_ActionCardGraph.h"
#include "META_BaseGoal.h"
#include "Templates/SubclassOf.h"
#include "META_FinishedGoal.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_FinishedGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_BaseGoal> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalStatus GoalResult;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_ActionCardGraph> ActionCards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SelectedActionCardNumber;

    FMETA_FinishedGoal();
};
