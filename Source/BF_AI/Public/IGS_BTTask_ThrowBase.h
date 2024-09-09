#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_BTTask_ThrowBase.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_ThrowBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_ThrowBase();

    UPROPERTY(EditAnywhere)
    bool BeingShotInterrupts;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ThrowNotifyTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer EventFilter;
    
};

