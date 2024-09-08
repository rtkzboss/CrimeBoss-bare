#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToBestProximityPos.generated.h"

class UEnvQuery;

UCLASS(Config=Inherit)
class BF_AI_API UIGS_BTTask_MoveToBestProximityPos : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
    UIGS_BTTask_MoveToBestProximityPos();

};

