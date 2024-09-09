#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_CallWalkieTalkieBase.h"
#include "BTTask_CallWalkieTalkie.generated.h"

UCLASS()
class BF_AI_API UBTTask_CallWalkieTalkie : public UBTTask_CallWalkieTalkieBase {
    GENERATED_BODY()
public:
    UBTTask_CallWalkieTalkie();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

