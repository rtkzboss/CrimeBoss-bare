#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToBestProximityPos.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_MoveToBestProximityPos : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UIGS_BTTask_MoveToBestProximityPos();

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
};

