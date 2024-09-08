#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ConditionOperator.h"
#include "META_CampaignModeCondition.generated.h"

USTRUCT(BlueprintType)
struct FMETA_CampaignModeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ConditionalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    PAYBACKDEFINITIONS_API FMETA_CampaignModeCondition();
};

