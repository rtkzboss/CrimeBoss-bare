#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateBags.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateBags : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_EvaluateBags();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestBagKey;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

};
