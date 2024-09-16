#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_FollowPlayer.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_FollowPlayer : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UIGS_BTTask_FollowPlayer();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SuspectedTargetPos;

    UPROPERTY(EditAnywhere)
    float RecalculateTimeMin;

    UPROPERTY(EditAnywhere)
    float RecalculateTimeMax;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

};
