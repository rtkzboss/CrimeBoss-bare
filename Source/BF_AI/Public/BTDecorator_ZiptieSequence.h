#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ZiptieSequence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_ZiptieSequence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_ZiptieSequence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CivToZiptieKey;

};
