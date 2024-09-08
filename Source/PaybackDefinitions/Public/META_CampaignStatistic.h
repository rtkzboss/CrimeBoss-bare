#pragma once
#include "CoreMinimal.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_CareerStatus.h"
#include "META_CampaignStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CampaignStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CareerStatus CampaignStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CareerCompletionReason CareerCompletionReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScoreForCampaign;
    
    FMETA_CampaignStatistic();
};

