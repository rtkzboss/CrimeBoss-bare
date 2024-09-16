#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BTDecorator_GR_IsSafeFromGrenade.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_GR_IsSafeFromGrenade : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_GR_IsSafeFromGrenade();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;

    UPROPERTY(EditAnywhere)
    FFloatInterval CheckInterval;

    UPROPERTY(EditAnywhere)
    float ExplosionRangeMultiplier;

};
