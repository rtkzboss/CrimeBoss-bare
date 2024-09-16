#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AimForward.generated.h"

class AActor;

UCLASS()
class BF_AI_API UBTTask_AimForward : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_AimForward();

    UPROPERTY(EditAnywhere)
    AActor* LookatActorNew;

    UPROPERTY()
    AActor* LookatActor;

};
