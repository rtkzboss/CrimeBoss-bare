#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionOperator.h"
#include "META_HeatGradeCondition.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeatGradeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CivilianCasualties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionOperator CivilianCasualtiesOperator;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PoliceCasualties;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionOperator PoliceCasualtiesOperator;

    FMETA_HeatGradeCondition();
};
