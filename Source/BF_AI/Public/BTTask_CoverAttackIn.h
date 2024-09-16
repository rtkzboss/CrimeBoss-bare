#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CoverAttackType.h"
#include "BTTask_CoverAttackIn.generated.h"

UCLASS()
class BF_AI_API UBTTask_CoverAttackIn : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_CoverAttackIn();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_CoverAttackType CoverAttackType;

    UPROPERTY(EditAnywhere)
    float DurationMin;

    UPROPERTY(EditAnywhere)
    float DurationMax;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TagretLastSeenPosition;

};
