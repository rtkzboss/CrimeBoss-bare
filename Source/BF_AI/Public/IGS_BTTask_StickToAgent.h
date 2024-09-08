#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "IGS_BTTask_MoveToBase.h"
#include "IGS_BTTask_StickToAgent.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_StickToAgent : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RecalculateTimeMin;
    
    UPROPERTY(EditAnywhere)
    float RecalculateTimeMax;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
public:
    UIGS_BTTask_StickToAgent();

};

