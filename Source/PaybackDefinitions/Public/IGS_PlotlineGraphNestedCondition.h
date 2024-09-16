#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "IGS_PlotlineGraphNestedCondition.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FIGS_PlotlineGraphNestedCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UObject*> Conditions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionExprOperator InnerConditionOperator;

    PAYBACKDEFINITIONS_API FIGS_PlotlineGraphNestedCondition();
};
