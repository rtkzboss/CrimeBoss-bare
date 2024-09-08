#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToMelee.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_MoveToMelee : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BattleTarget;
    
public:
    UIGS_BTTask_MoveToMelee();

};

