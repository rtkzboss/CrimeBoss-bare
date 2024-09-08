#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_HeavySolveShockUsage.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_HeavySolveShockUsage : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ShouldUseShockKey;
    
public:
    UIGS_BTService_HeavySolveShockUsage();

};

