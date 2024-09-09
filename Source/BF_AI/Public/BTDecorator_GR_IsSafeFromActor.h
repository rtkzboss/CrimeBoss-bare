#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BTDecorator_GR_IsSafeFromActor.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_GR_IsSafeFromActor : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_GR_IsSafeFromActor();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SafeRangeKey;
    
    UPROPERTY(EditAnywhere)
    float SafeDistance;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval CheckInterval;
    
    UPROPERTY(EditAnywhere)
    bool SafeDistanceFromBB;
    
    UPROPERTY(EditAnywhere)
    bool SafeWhenHidden;
    
};

