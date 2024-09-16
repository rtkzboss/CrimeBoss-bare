#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateMountedGunUsage.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateMountedGunUsage : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_EvaluateMountedGunUsage();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestMountedGunKey;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

};
