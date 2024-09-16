#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTService_ReactToThreat.generated.h"

UCLASS()
class BF_AI_API UBTService_ReactToThreat : public UBTService {
    GENERATED_BODY()
public:
    UBTService_ReactToThreat();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestCoverKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector NeedReactToThreathKey;

    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionCooldownTag;

};
