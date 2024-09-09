#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandType.h"
#include "BTDecorator_HasSOCommand.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasSOCommand : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasSOCommand();

    UPROPERTY(EditAnywhere)
    EIGS_AICommandType commandType;
    
    UPROPERTY(EditAnywhere)
    bool RestartOnNewCommand;
    
};

