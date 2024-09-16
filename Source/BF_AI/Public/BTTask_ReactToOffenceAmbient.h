#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_ReactToOffenceAmbient.generated.h"

UCLASS()
class BF_AI_API UBTTask_ReactToOffenceAmbient : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ReactToOffenceAmbient();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;

};
