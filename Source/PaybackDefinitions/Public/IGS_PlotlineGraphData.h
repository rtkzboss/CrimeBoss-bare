#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "IGS_PlotlineGraphNestedCondition.h"
#include "META_PlotlineGraphStartTime.h"
#include "IGS_PlotlineGraphData.generated.h"

class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct FIGS_PlotlineGraphData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> Graph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_PlotlineGraphStartTime StartTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_PlotlineGraphNestedCondition> PlotlineConditions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionExprOperator OuterConditionOperator;

    PAYBACKDEFINITIONS_API FIGS_PlotlineGraphData();
};
