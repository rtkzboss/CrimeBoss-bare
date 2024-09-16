#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandState.h"
#include "BTDecorator_SOCommandState.generated.h"

class UIGS_AICommand;

UCLASS()
class BF_AI_API UBTDecorator_SOCommandState : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_SOCommandState();

    UPROPERTY(EditAnywhere)
    EIGS_AICommandState CommandState;

protected:
    UPROPERTY()
    UIGS_AICommand* Command;

};
