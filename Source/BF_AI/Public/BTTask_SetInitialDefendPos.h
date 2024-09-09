#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetInitialDefendPos.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTTask_SetInitialDefendPos : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SetInitialDefendPos();

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
};

