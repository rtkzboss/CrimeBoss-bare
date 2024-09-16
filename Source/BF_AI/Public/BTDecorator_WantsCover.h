#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_WantsCover.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_WantsCover : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_WantsCover();

protected:
    UPROPERTY(EditAnywhere)
    float ThreathTreshold;

};
