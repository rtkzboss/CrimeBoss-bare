#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_RequestAnimationTask.generated.h"

UCLASS()
class BF_AI_API UBTTask_RequestAnimationTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_RequestAnimationTask();

    UPROPERTY(EditAnywhere)
    FGameplayTag AnimationTypeTag;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MontageTypeBlackBoardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AnimationCommandKey;
    
    UPROPERTY(EditAnywhere)
    bool bIsBlackboardBased;
    
    UPROPERTY(EditAnywhere)
    bool bIsAnimationCommand;
    
    UPROPERTY(EditAnywhere)
    bool bHasPlayTime;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeAborted;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector PlayTimeBlackBoardKey;
    
    UPROPERTY(EditAnywhere)
    float PlayTime;
    
};

