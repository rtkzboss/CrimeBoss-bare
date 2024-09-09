#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SwitchToMelee.generated.h"

UCLASS()
class BF_AI_API UBTService_SwitchToMelee : public UBTService {
    GENERATED_BODY()
public:
    UBTService_SwitchToMelee();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector UseMeleeKey;
    
    UPROPERTY(EditAnywhere)
    float ExtraDistanceFromRangeToStopMelee;
    
    UPROPERTY(EditAnywhere)
    float ExtraDistanceFromRangeToStopBash;
    
};

