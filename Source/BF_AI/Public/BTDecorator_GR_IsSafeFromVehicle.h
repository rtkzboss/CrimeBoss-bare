#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BTDecorator_GR_IsSafeFromVehicle.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_GR_IsSafeFromVehicle : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_GR_IsSafeFromVehicle();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;

    UPROPERTY(EditAnywhere)
    FFloatInterval CheckInterval;

    UPROPERTY(EditAnywhere)
    float SafeDistanceFromLine;

    UPROPERTY(EditAnywhere)
    float SafeDistanceFromVehicle;

};
