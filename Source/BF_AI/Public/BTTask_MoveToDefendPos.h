#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToDefendPos.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTTask_MoveToDefendPos : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UBTTask_MoveToDefendPos();

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

};
