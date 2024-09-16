#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_AdditionalConditionChance.h"
#include "META_RandomWayChance.generated.h"

USTRUCT(BlueprintType)
struct FMETA_RandomWayChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NodeId;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Chance;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FMETA_AdditionalConditionChance> Conditions;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_ConditionExprOperator ConditionOperator;

    CRIMEBOSSMETA_API FMETA_RandomWayChance();
};
