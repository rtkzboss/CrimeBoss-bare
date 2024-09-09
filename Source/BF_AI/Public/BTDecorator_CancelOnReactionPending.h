#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CancelOnReactionPending.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_CancelOnReactionPending : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CancelOnReactionPending();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ReactToThreathKey;
    
    UPROPERTY(EditAnywhere)
    float CancelDelay;
    
};

