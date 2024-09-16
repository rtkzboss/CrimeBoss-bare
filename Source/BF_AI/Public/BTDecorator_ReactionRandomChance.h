#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ReactionRandomChance.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_ReactionRandomChance : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_ReactionRandomChance();

    UPROPERTY(EditAnywhere)
    float HighIntensityChance;

    UPROPERTY(EditAnywhere)
    float LowIntensityChance;

};
