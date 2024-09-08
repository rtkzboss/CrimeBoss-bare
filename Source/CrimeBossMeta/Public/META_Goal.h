#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_GoalPurpose.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_Partner.h"
#include "META_ActionCardGraph.h"
#include "Templates/SubclassOf.h"
#include "META_Goal.generated.h"

class UMETA_MissionID;
class UMETA_TaskCondition;
class UStoryGraphManager;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMETA_Goal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStoryGraphManager> Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsGoalRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysBetweenAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinRespectWhenGoalAvailableForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_MissionID>> Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalStatus Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_TaskCondition*> AssignedTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_TaskCondition*> FinishedInnerTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_ActionCardGraph> ActionCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<int32> VisitedGraphNodeIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SelectedActionCardNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RespectByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner InstigatorPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalPurpose Purpose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EntitlementTag;
    
    CRIMEBOSSMETA_API FMETA_Goal();
};

