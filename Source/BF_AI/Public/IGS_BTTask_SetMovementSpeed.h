#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_Speed.h"
#include "IGS_BTTask_SetMovementSpeed.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SetMovementSpeed : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_SetMovementSpeed();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MovementSpeedBlackBoardKey;
    
    UPROPERTY(EditAnywhere)
    bool bIsBlackboardBased;
    
    UPROPERTY(EditAnywhere)
    bool bIsBasedOnCombatRange;
    
    UPROPERTY(EditAnywhere)
    EIGS_Speed MovementSpeedOutsideCombatRange;
    
    UPROPERTY(EditAnywhere)
    EIGS_Speed MovementSpeed;
    
};

