#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_HaveTicketToMoveInspectOffence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HaveTicketToMoveInspectOffence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HaveTicketToMoveInspectOffence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

