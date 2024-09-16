#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "IGS_BTTask_SetReactionCooldowns.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SetReactionCooldowns : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_SetReactionCooldowns();

    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionCooldownTag;

};
