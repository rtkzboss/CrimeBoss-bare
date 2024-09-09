#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_GRWaitType.h"
#include "BTDecorator_HasWaitForGeneralReaction.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_HasWaitForGeneralReaction : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasWaitForGeneralReaction();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_GRWaitType Type;
    
};

