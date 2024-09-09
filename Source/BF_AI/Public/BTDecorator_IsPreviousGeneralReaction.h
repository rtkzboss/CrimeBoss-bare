#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_IsPreviousGeneralReaction.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_IsPreviousGeneralReaction : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsPreviousGeneralReaction();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag PreviousGlobalReactionTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimeSince;
    
};

