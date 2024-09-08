#pragma once
#include "CoreMinimal.h"
#include "IGS_AnalyticsCommonMetaAttributes.generated.h"

USTRUCT(BlueprintType)
struct BF_ANALYTICS_API FIGS_AnalyticsCommonMetaAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 AvailableArmy;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AvailableHeisters;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CampaignDay;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CampaignNum;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Cash;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Heat;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Investigation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 OwnedTurfs;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Respect;
    
    UPROPERTY(BlueprintReadWrite)
    FString CampaignMode;
    
    UPROPERTY(BlueprintReadWrite)
    FString UserDifficulty;
    
    FIGS_AnalyticsCommonMetaAttributes();
};

