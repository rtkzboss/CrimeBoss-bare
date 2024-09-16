#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GR_EvadeGrenade.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UBTService_GR_EvadeGrenade : public UBTService {
    GENERATED_BODY()
public:
    UBTService_GR_EvadeGrenade();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestEvadePosKey;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

};
