#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToCombatDefendPos.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTTask_MoveToCombatDefendPos : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UBTTask_MoveToCombatDefendPos();

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

};
