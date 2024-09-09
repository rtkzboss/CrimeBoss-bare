#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_ReactToThreat.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_ReactToThreat : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_ReactToThreat();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ReactToThreathKey;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionCooldownTag;
    
};

