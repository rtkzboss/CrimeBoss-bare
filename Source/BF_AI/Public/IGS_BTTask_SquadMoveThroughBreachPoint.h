#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadMoveThroughBreachPoint.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadMoveThroughBreachPoint : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector StackPosBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* StackPosQuery;
    
public:
    UIGS_BTTask_SquadMoveThroughBreachPoint();

};

