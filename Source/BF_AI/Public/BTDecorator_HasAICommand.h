#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandType.h"
#include "BTDecorator_HasAICommand.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasAICommand : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_AICommandType commandType;
    
    UPROPERTY(EditAnywhere)
    bool RestartOnNewCommand;
    
    UBTDecorator_HasAICommand();

};

