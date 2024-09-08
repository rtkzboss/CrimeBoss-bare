#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CoverAttackSequenceBase.generated.h"

UCLASS(Abstract)
class BF_AI_API UBTDecorator_CoverAttackSequenceBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector UpdateCoverKey;
    
public:
    UBTDecorator_CoverAttackSequenceBase();

};

