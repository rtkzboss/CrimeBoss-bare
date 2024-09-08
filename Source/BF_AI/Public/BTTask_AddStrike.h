#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_AddStrike.generated.h"

UCLASS()
class BF_AI_API UBTTask_AddStrike : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 StrikeCount;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag BlameTag;
    
    UBTTask_AddStrike();

};

