#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_GRWaitType.h"
#include "BTDecorator_HasWaitForGeneralReaction.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_HasWaitForGeneralReaction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_GRWaitType Type;
    
    UBTDecorator_HasWaitForGeneralReaction();

};

