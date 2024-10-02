#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitForMeleeAttack.generated.h"

UCLASS()
class BF_AI_API UBTTask_WaitForMeleeAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitForMeleeAttack();

};
