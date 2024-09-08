#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_WaitForCooldown.generated.h"

UCLASS()
class BF_AI_API UBTTask_WaitForCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UBTTask_WaitForCooldown();

};

