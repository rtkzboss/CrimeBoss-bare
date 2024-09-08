#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToAlertingCharacter.generated.h"

class UEnvQuery;

UCLASS(Config=Inherit)
class BF_AI_API UBTTask_MoveToAlertingCharacter : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LOSStoppingDistance;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
    UBTTask_MoveToAlertingCharacter();

};

