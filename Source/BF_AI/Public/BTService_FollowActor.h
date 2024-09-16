#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FollowActor.generated.h"

UCLASS()
class BF_AI_API UBTService_FollowActor : public UBTService {
    GENERATED_BODY()
public:
    UBTService_FollowActor();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutFollowActorKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutFollowSpeedKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutFollowDistanceKey;

};
