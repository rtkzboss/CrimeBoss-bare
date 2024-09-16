#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GR_EvaluateBestPosForVehicleEvasion.generated.h"

UCLASS()
class BF_AI_API UBTService_GR_EvaluateBestPosForVehicleEvasion : public UBTService {
    GENERATED_BODY()
public:
    UBTService_GR_EvaluateBestPosForVehicleEvasion();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestEvadePosKey;

    UPROPERTY(EditAnywhere)
    float EvadePulse;

    UPROPERTY(EditAnywhere)
    float MinEvadeDistance;

    UPROPERTY(EditAnywhere)
    float RayCastDegreesStep;

    UPROPERTY(EditAnywhere)
    int32 MaxRayCasts;

};
