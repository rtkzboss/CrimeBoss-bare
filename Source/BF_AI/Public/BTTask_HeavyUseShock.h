#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_HeavyUseShock.generated.h"

class AActor;

UCLASS()
class BF_AI_API UBTTask_HeavyUseShock : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_HeavyUseShock();

private:
    UPROPERTY()
    AActor* m_Target;
    
};

