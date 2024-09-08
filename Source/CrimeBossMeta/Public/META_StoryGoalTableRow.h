#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"
#include "META_ActionCardGoal.h"
#include "Templates/SubclassOf.h"
#include "META_StoryGoalTableRow.generated.h"

class UMETA_MissionID;
class UStoryGraphManager;
class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_StoryGoalTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStoryGraphManager> Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsGoalRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysBetweenAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_MissionID>> Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_ActionCardGoal> ActionCardsGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RespectByDefault;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseLockRespectCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl UnlockRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl LockRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner InstigatorPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EntitlementTag;
    
    FMETA_StoryGoalTableRow();
};

