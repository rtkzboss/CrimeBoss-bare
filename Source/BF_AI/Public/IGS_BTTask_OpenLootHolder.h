#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_OpenLootHolder.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_OpenLootHolder : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_OpenLootHolder();

    UPROPERTY(EditAnywhere)
    float DelayAfterInteracting;
    
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootingCollection;
    
    UPROPERTY(EditAnywhere)
    bool WaitForBashHitsHandled;
    
};

