#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandType.h"
#include "BTDecorator_HasActiveSOCommand.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasActiveSOCommand : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasActiveSOCommand();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_AICommandType commandType;
    
};

