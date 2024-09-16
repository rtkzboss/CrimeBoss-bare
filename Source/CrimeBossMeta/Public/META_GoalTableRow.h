#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_GoalPriority.h"
#include "EMETA_GoalPurpose.h"
#include "EMETA_GoalType.h"
#include "META_BaseGoal.h"
#include "META_MoneyMakingGoalTableRow.h"
#include "META_StoryGoalTableRow.h"
#include "Templates/SubclassOf.h"
#include "META_GoalTableRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_GoalTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_BaseGoal> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalType GoalType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalPurpose GoalPurpose;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalPriority Priority;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_StoryGoalTableRow StoryGoal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_MoneyMakingGoalTableRow MoneyMakingGoal;

    FMETA_GoalTableRow();
};
