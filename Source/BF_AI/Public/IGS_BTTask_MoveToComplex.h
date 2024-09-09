#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_MoveToBase.h"
#include "IGS_BTTask_MoveToComplex.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_MoveToComplex : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_MoveToComplex();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FinishMoveEarlyDistance;
    
};

