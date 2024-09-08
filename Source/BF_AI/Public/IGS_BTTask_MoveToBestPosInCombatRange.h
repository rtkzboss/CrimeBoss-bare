#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_MoveToBase.h"
#include "IGS_BTTask_MoveToBestPosInCombatRange.generated.h"

class UEnvQuery;

UCLASS(Config=Inherit)
class BF_AI_API UIGS_BTTask_MoveToBestPosInCombatRange : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RecalculateTimeMin;
    
    UPROPERTY(EditAnywhere)
    float RecalculateTimeMax;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SuspectedTargetPos;
    
public:
    UIGS_BTTask_MoveToBestPosInCombatRange();

};

