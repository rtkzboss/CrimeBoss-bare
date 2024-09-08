#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateBestCover.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateBestCover : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplateDefendPoint;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestCoverKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector IsDodgingKey;
    
    UPROPERTY(EditAnywhere)
    float RefreshDelay;
    
public:
    UIGS_BTService_EvaluateBestCover();

};

