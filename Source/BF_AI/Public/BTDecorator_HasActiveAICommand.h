#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandType.h"
#include "BTDecorator_HasActiveAICommand.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasActiveAICommand : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasActiveAICommand();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_AICommandType commandType;

};
