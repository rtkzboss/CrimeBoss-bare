#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RunEQSQueryRandom.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTTask_RunEQSQueryRandom : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_RunEQSQueryRandom();

    UPROPERTY(VisibleAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(VisibleAnywhere)
    TArray<FEnvNamedValue> QueryParams;

    UPROPERTY(VisibleAnywhere)
    TArray<FAIDynamicParam> QueryConfig;

    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;

    UPROPERTY(VisibleAnywhere)
    FBlackboardKeySelector EQSQueryBlackboardKey;

    UPROPERTY(EditAnywhere)
    bool bUseBBKey;

    UPROPERTY(EditAnywhere)
    int32 RandomItemCount;

    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;

};
