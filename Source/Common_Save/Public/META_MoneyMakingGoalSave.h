#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_TaskInfoSave.h"
#include "Templates/SubclassOf.h"
#include "META_MoneyMakingGoalSave.generated.h"

class UMETA_BaseGoal;
class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_MoneyMakingGoalSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_BaseGoal> GoalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_TaskInfoSave Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_MissionID>> Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MonetaryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalStatus Result;
    
    FMETA_MoneyMakingGoalSave();
};

