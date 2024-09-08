#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_Speed.h"
#include "BTDecorator_IsMovementSpeed.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsMovementSpeed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_Speed Speed;
    
    UBTDecorator_IsMovementSpeed();

};

