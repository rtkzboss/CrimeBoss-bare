#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_CanDodgeToCover.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_CanDodgeToCover : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanDodgeToCover();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToPositionKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ReactToThreathKey;

    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionCooldownTag;

};
