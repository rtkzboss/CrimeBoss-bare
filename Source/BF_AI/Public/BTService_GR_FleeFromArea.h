#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GR_FleeFromArea.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTService_GR_FleeFromArea : public UBTService {
    GENERATED_BODY()
public:
    UBTService_GR_FleeFromArea();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EvadePosKey;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    float EQSCooldown;

};
