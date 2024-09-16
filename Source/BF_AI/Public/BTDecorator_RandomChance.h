#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_RandomChance.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_RandomChance : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_RandomChance();

    UPROPERTY(EditAnywhere)
    float Chance;

};
