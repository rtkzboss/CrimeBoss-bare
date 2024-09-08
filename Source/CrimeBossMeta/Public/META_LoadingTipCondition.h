#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_LoadingTipCondition.generated.h"

class UMETA_BaseCondition;

USTRUCT(BlueprintType)
struct FMETA_LoadingTipCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer Scenarios;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UMETA_BaseCondition*> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_ConditionExprOperator Operator;
    
    CRIMEBOSSMETA_API FMETA_LoadingTipCondition();
};

