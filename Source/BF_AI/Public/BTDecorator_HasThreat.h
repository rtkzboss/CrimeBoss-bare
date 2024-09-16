#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasThreat.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasThreat : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasThreat();

protected:
    UPROPERTY(EditAnywhere)
    float Value;

};
