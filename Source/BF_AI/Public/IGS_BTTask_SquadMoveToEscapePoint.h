#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadMoveToEscapePoint.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SquadMoveToEscapePoint : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadMoveToEscapePoint();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EscapePointKey;

};
