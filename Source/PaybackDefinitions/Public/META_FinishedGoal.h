#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_ActionCardGraph.h"
#include "Templates/SubclassOf.h"
#include "META_FinishedGoal.generated.h"

class UMETA_BaseGoal;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_FinishedGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_BaseGoal> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GoalStatus GoalResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_ActionCardGraph> ActionCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SelectedActionCardNumber;
    
    FMETA_FinishedGoal();
};

