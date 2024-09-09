#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandState.h"
#include "BTDecorator_AICommandState.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_AICommandState : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_AICommandState();

    UPROPERTY(EditAnywhere)
    EIGS_AICommandState CommandState;
    
};

