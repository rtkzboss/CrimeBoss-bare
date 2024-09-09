#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"
#include "BTTask_InterpolateTo.generated.h"

UCLASS()
class BF_AI_API UBTTask_InterpolateTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_InterpolateTo();

private:
    UPROPERTY(EditAnywhere)
    float InterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    EIGS_CharacterVsHeistersCollisionStatus MovingCharacterVsHeistersCollisionStatus;
    
};

