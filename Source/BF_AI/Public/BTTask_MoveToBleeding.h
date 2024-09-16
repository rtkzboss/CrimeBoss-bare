#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToBleeding.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTTask_MoveToBleeding : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UBTTask_MoveToBleeding();

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

};
