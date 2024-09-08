#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "IGS_BTTask_MoveToBase.h"
#include "IGS_BTTask_GetOutOfAgent.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_GetOutOfAgent : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
public:
    UIGS_BTTask_GetOutOfAgent();

};

