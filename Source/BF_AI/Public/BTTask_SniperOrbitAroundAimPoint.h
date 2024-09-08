#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_AimType.h"
#include "BTTask_SniperOrbitAroundAimPoint.generated.h"

UCLASS()
class BF_AI_API UBTTask_SniperOrbitAroundAimPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SnipePointKey;
    
    UPROPERTY(EditAnywhere)
    EIGS_AimType AimType;
    
public:
    UBTTask_SniperOrbitAroundAimPoint();

};

