#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SolveNeedsFightForWaypoint.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_SolveNeedsFightForWaypoint : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_SolveNeedsFightForWaypoint();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector NeedsFightForWaypoint;

};
