#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GR_FleeFromActor.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTService_GR_FleeFromActor : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestEvadePosKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SafeDistanceKey;
    
    UPROPERTY(EditAnywhere)
    float SafeDistance;
    
    UPROPERTY(EditAnywhere)
    bool SafeDistanceFromBB;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    float EQSCooldown;
    
    UPROPERTY(EditAnywhere)
    float InnerRangeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float OuterRangeMultiplier;
    
public:
    UBTService_GR_FleeFromActor();

};

