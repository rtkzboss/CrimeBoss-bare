#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SolveCrouchToCover.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_SolveCrouchToCover : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CoverdKey;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
public:
    UIGS_BTService_SolveCrouchToCover();

};

