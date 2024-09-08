#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "IGS_CutsceneTagValue.h"
#include "META_CutsceneUIData.generated.h"

class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CutsceneUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FIGS_CutsceneTagValue> CutsceneChoiceTagParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner Partner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanStartDelayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysToExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ScreenAfterEnd;
    
    UPROPERTY(BlueprintReadWrite)
    FText DebugText;
    
    UPROPERTY(BlueprintReadWrite)
    UMETA_BaseStoryGraphManager* GraphRef;
    
    UPROPERTY(BlueprintReadWrite)
    int32 OriginalID;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<int32, int32> ResultEdgeMap;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ExpiredID;
    
    FMETA_CutsceneUIData();
};

