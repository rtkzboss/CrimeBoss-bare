#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToStackPos.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTTask_MoveToStackPos : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UBTTask_MoveToStackPos();

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

};
