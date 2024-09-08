#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_CampaignModeCondition.h"
#include "META_CampaignModeMatchingData.generated.h"

class UMETA_PlotlineSelection;

USTRUCT(BlueprintType)
struct FMETA_CampaignModeMatchingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UMETA_PlotlineSelection> CampaignMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FMETA_CampaignModeCondition> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_ConditionExprOperator ExpressionOperator;
    
    PAYBACKDEFINITIONS_API FMETA_CampaignModeMatchingData();
};

