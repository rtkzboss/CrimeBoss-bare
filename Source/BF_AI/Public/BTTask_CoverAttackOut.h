#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CoverAttackType.h"
#include "BTTask_CoverAttackOut.generated.h"

UCLASS()
class BF_AI_API UBTTask_CoverAttackOut : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_CoverAttackOut();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_CoverAttackType CoverAttackType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TagretLastSeenPosition;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CoverForwardPoint;
    
};

