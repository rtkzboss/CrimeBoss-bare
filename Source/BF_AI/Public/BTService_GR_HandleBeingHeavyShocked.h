#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GR_HandleBeingHeavyShocked.generated.h"

UCLASS()
class BF_AI_API UBTService_GR_HandleBeingHeavyShocked : public UBTService {
    GENERATED_BODY()
public:
    UBTService_GR_HandleBeingHeavyShocked();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AnimTypeTagKey;
    
    UPROPERTY(EditDefaultsOnly)
    float HitReactionChance;
    
    UPROPERTY(EditDefaultsOnly)
    float HeavyReactionChance;
    
};

