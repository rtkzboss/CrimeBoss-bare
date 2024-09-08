#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_HideBehindPlayer.generated.h"

class UEnvQuery;

UCLASS(Config=Inherit)
class BF_AI_API UIGS_BTTask_HideBehindPlayer : public UBTTask_MoveToWithRepath {
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
    UIGS_BTTask_HideBehindPlayer();

};

