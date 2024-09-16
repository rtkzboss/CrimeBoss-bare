#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "IGS_BTDecorator_IsTimeFromLastMove.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_IsTimeFromLastMove : public UBTDecorator {
    GENERATED_BODY()
public:
    UIGS_BTDecorator_IsTimeFromLastMove();

protected:
    UPROPERTY(EditAnywhere)
    float Seconds;

};
